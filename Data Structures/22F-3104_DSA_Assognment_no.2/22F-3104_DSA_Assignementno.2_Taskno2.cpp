//#include<iostream>
//using namespace std;
//class Node
//{
//public:
//    string data;   
//    Node* next;    
//    Node(string value)
//    {
//        data = value;
//        next = NULL;
//    }
//};
//class Stack
//{
//private:
//    Node* Top;          
//    Node* Redo_Top;     
//
//public:
//    Stack()
//    {
//        Top = NULL;
//        Redo_Top = NULL;
//    }
//    // Method to check if the stack is empty
//    bool isEmpty()
//    {
//        return Top == NULL;
//    }
//    // Method to add a text to the stack
//    void push(string data)
//    {
//        Node* newNode = new Node(data);
//        newNode->next = Top;
//        Top = newNode;
//    }
//    // Method to undo the last text 
//    void undo()
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty! Underflow" << endl;
//            return;
//        }
//        Node* temp = Top;
//        Top = Top->next;
//        temp->next = Redo_Top;
//        Redo_Top = temp;
//    }
//    // Method to redo a text  by moving it back to the main stack
//    void Redo()
//    {
//        if (Redo_Top == NULL)
//        {
//            cout << "Nothing to Redo :" << endl;
//            return;
//        }
//        Node* redoNode = Redo_Top;
//        Redo_Top = Redo_Top->next;
//
//        redoNode->next = Top;
//        Top = redoNode;
//    }
//    // Method to display the stack text data
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is Empty" << endl;
//        }
//        else
//        {
//            Node* temp = Top;
//            while (temp != nullptr)
//            {
//                cout << temp->data << "   ";
//                temp = temp->next;
//            }
//            cout << endl;
//        }
//    }
//    // Destructor to free dynamically allocated memory and clear the stack
//    ~Stack()
//    {
//        while (!isEmpty())
//        {
//            undo();
//        }
//    }
//};
//int main()
//{
//    Stack s;
//    string choice, data;
//    while (true)
//    {
//        cout << "1. Add Text" << endl;
//        cout << "2. Undo Text" << endl;
//        cout << "3. Redo Text" << endl;
//        cout << "4. Display Text" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter your choice : ";
//        cin >> choice;
//        if (choice == "1")
//        {
//            cout << "Enter Command : ";
//            cin >> data;
//            s.push(data);
//        }
//        else if (choice == "2")
//        {
//            s.undo();
//        }
//        else if (choice == "3")
//        {
//            s.Redo();
//        }
//        else if (choice == "4")
//        {
//            s.display();
//        }
//        else if (choice == "5")
//        {
//            cout << "Goodbye!" << endl;
//            break;
//        }
//        else
//        {
//            cout << "Invalid choice, please try again" << endl;
//        }
//    }
//    system("pause>0");
//    return 0;
//}
