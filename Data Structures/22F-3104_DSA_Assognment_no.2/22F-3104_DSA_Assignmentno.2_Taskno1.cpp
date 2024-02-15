#include <iostream>
#include <string>
using namespace std;
struct Node {
    char Data;
    Node* next;
    Node(char Data) : Data(Data), next(NULL) {}
};
class Stack {
private:
public:
    Node* top;
    Stack() : top(NULL) {}
    // Push a character onto the stack
    void push(char Data) {
        Node* newNode = new Node(Data);
        newNode->next = top;
        top = newNode;
        display(Data);
    }

    // Pop and return a character from the stack
    char pop() {
        if (isEmpty()) {
            cout << "\nStack is Empty" << endl;
            return '\0';
        }
        char Data = top->Data;
        Node* temp = top;
        top = top->next;
        delete temp;
        display();
        return Data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }
    // Display the contents of the stack, with an optional operation character
    void display(char operation = '\0') {
        cout << "\nStack: ";
        Node* current = top;
        while (current != NULL) {
            cout << current->Data << " ";
            current = current->next;
        }
        if (operation != '\0') {
            cout << operation;
        }
        cout << endl;
    }
    // Check if a character is an operator
    bool isOperator(char Opera) {
        return (Opera == '+' || Opera == '-' || Opera == '*' || Opera == '/' || Opera == '%');
    }

    // Get the precedence of an operator
    int getPrecedence(char Opera) {
        if (Opera == '+' || Opera == '-') {
            return 1;
        }
        else if (Opera == '*' || Opera == '/' || Opera == '%') {
            return 2;
        }
        else {
            return 0;
        }
    }
    // Convert an infix expression to postfix notation
    string infixToPostfix(string infix) {
        string result;
        for (int i = 0; i < infix.length(); i++) {
            char ch = infix[i];
            if (ch >= '0' && ch <= '9') {
                result += ch;
            }
            else if (ch == '(') {
                push(ch);
            }
            else if (ch == ')') {
                while (!isEmpty() && top->Data != '(') {
                    result += pop();
                }
                pop(); // Pop the '('
            }
            else if (isOperator(ch)) {
                while (!isEmpty() && getPrecedence(top->Data) >= getPrecedence(ch) && top->Data != '(') {
                    result += pop();
                }
                push(ch);
            }
        }
        while (!isEmpty()) {
            if (top->Data == '(') {
                pop(); // Pop the remaining '('
            }
            else {
                result += pop();
            }
        }
        return result;
    }
};
int main() {
    Stack s1;
    string infixExp;
    cout << "Enter infix: ";
    cin >> infixExp;
    cout << "Infix: " << infixExp;
    string postfixExp = s1.infixToPostfix(infixExp);
    // Reverse the infix expression
    reverse(infixExp.begin(), infixExp.end());
    for (int i = 0; i < infixExp.length(); i++) {
        if (infixExp[i] == ')') {
            infixExp[i] = '(';
        }
        else {
            infixExp[i] == ')';
        }
    }
    // Convert the reversed infix expression to prefix notation
    string prefixExp = s1.infixToPostfix(infixExp);
    // Reverse the prefix expression back
    reverse(prefixExp.begin(), prefixExp.end());
    for (int i = 0; i < prefixExp.length(); i++) {
        if (prefixExp[i] == ')') {
            prefixExp[i] = '(';
        }
        else {
            prefixExp[i] == ')';
        }
    }
    cout <<endl<< "Postfix: " << postfixExp << endl;
    cout << "Prefix: " << prefixExp << endl;
    return 0;
}
