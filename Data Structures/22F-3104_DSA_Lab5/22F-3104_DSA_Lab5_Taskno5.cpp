#include<iostream>
using namespace std;
struct StackNode {
    char num;
    StackNode* next;
    StackNode(char t) {
        num = t;
        next = NULL;
    }
};
class stacklinkedlst {
    StackNode* top;
    string data;
public:
    stacklinkedlst() {
        top = NULL;
    }
    StackNode* createStackNode(char t) {
        StackNode* nn = new StackNode(t);
        return nn;
    }
    bool isempty() {
        return (top == NULL);
    }
    void insert(char ch) {
        if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (!isempty() && top->num != '(') {
                char popped = pop();
                data = data + popped;
            }
            pop();
        }
    }
    void remaining() {
        while (!isempty()) {
            char ch = pop();
            data = data + ch;
        }
    }
    void push(char ch) {
        StackNode* newStackNode = new StackNode(ch);
        if (top == nullptr) {
            top = newStackNode;
        }
        else {
            newStackNode->next = top;
            top = newStackNode;
        }
    }
    char pop() {
        char ch;
        StackNode* tempptr = top;
        if (tempptr != NULL) {
            if (tempptr->next != NULL) {
                top = tempptr->next;
            }
            else {
                top = NULL;
            }
            ch = tempptr->num;
            delete tempptr;
        }
        else {
            cout << "list is empty";
            ch = '\0';
        }
        return ch;
    }
};
int main() {
        stacklinkedlst s1;
        string expression;
        int num = 0;
        do {
            cout << "Enter any number or press (0) to exit :"<<endl;
            cin >> num;
            cout << "Enter an expression: ";
            cin >> expression;
            bool isBalanced = true;
            for (char ch : expression) {
                if (ch == '(' || ch == '[' || ch == '{') {
                    s1.push(ch);
                }
                else if (ch == ')' || ch == ']' || ch == '}') {
                    if (s1.isempty()) {
                        isBalanced = false;
                        break;
                    }
                    char popped = s1.pop();
                    if ((ch == ')' && popped != '(') || (ch == ']' && popped != '[') || (ch == '}' && popped != '{')) {
                        isBalanced = false;
                        break;
                    }
                }
            }
            // Check if the stack is empty after processing the expression
            if (!s1.isempty()) {
                isBalanced = false;
            }
            if (isBalanced) {
                cout << "The expression is balanced " << endl;
            }
            else {
                cout << "The expression is not balanced " << endl;
            }
        } while (num != 0);
        return 0;
    }