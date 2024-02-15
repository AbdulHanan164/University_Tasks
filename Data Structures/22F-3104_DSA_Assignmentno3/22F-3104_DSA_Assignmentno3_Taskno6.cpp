//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct StudentNode
//{
//    string studentID, studentName, studentDepartment;
//    int height;
//    StudentNode* left;
//    StudentNode* right;
//};
//
//class StudentEnrollmentSystem
//{
//public:
//    StudentNode* root;
//
//    StudentEnrollmentSystem()
//    {
//        root = NULL;
//    }
//
//    int getHeight(StudentNode* node)
//    {
//        if (node == NULL)
//        {
//            return 0;
//        }
//        else
//        {
//            return node->height;
//        }
//    }
//
//    int getBalanceFactor(StudentNode* node)
//    {
//        if (node == NULL)
//        {
//            return 0;
//        }
//        else
//        {
//            int leftHeight = getHeight(node->left);
//            int rightHeight = getHeight(node->right);
//            int heightDifference = leftHeight - rightHeight;
//            return heightDifference;
//        }
//    }
//
//    void updateHeight(StudentNode* node)
//    {
//        if (node == NULL)
//        {
//            return;
//        }
//        int leftHeight = getHeight(node->left);
//        int rightHeight = getHeight(node->right);
//        int maxSubtreeHeight = max(leftHeight, rightHeight);
//        int updatedHeight = maxSubtreeHeight + 1;
//        node->height = updatedHeight;
//    }
//
//    StudentNode* rotateRight(StudentNode* y)
//    {
//        StudentNode* x = y->left;
//        StudentNode* T2 = x->right;
//        x->right = y;
//        y->left = T2;
//        updateHeight(y);
//        updateHeight(x);
//        return x;
//    }
//
//    StudentNode* rotateLeft(StudentNode* x)
//    {
//        StudentNode* y = x->right;
//        StudentNode* T2 = y->left;
//        y->left = x;
//        x->right = T2;
//        updateHeight(x);
//        updateHeight(y);
//        return y;
//    }
//
//    StudentNode* insert(StudentNode* node, string studentID, string studentName, string studentDepartment)
//    {
//        if (node == NULL)
//        {
//            StudentNode* newNode = new StudentNode;
//            newNode->studentID = studentID;
//            newNode->studentName = studentName;
//            newNode->studentDepartment = studentDepartment;
//            newNode->left = NULL;
//            newNode->right = NULL;
//            newNode->height = 1;
//            return newNode;
//        }
//
//        if (studentID < node->studentID)
//        {
//            node->left = insert(node->left, studentID, studentName, studentDepartment);
//        }
//        else if (studentID > node->studentID)
//        {
//            node->right = insert(node->right, studentID, studentName, studentDepartment);
//        }
//        else
//            return node;  // Duplicate student IDs not allowed
//
//        updateHeight(node);
//
//        int balanceFactor = getBalanceFactor(node);
//
//        // Left Left case
//        if (balanceFactor > 1 && studentID < node->left->studentID)
//        {
//            return rotateRight(node);
//        }
//        // Right Right case
//        if (balanceFactor < -1 && studentID > node->right->studentID)
//        {
//            return rotateLeft(node);
//        }
//        // Left Right case
//        if (balanceFactor > 1 && studentID > node->left->studentID)
//        {
//            node->left = rotateLeft(node->left);
//            return rotateRight(node);
//        }
//
//        // Right Left case
//        if (balanceFactor < -1 && studentID < node->right->studentID)
//        {
//            node->right = rotateRight(node->right);
//            return rotateLeft(node);
//        }
//
//        return node;
//    }
//
//    StudentNode* search(StudentNode* node, const string& studentID)
//    {
//        if (node == nullptr || node->studentID == studentID)
//        {
//            return node;
//        }
//        if (studentID < node->studentID)
//        {
//            return search(node->left, studentID);
//        }
//        else
//            return search(node->right, studentID);
//    }
//
//    void updateDepartment(string studentID, string newDepartment)
//    {
//        StudentNode* studentNode = search(root, studentID);
//        if (studentNode == nullptr)
//        {
//            cout << "Student not found." << endl;
//            return;
//        }
//
//        studentNode->studentDepartment = newDepartment;
//        studentNode->studentID[0] = newDepartment[0];
//        cout << "Department updated successfully." << endl;
//    }
//
//    void inorder(StudentNode* node)
//    {
//        if (node == nullptr)
//        {
//            return;
//        }
//        inorder(node->left);
//        cout << "Student ID: " << node->studentID << endl;
//        cout << "Student Name: " << node->studentName << endl;
//        cout << "Student Department: " << node->studentDepartment << endl;
//        cout << endl;
//        inorder(node->right);
//    }
//};
//void displayMenu() {
//    cout << "============================" << endl;
//    cout << "Student Enrollment System" << endl;
//    cout << "============================" << endl;
//    cout << "1. Add a student" << endl;
//    cout << "2. Update a student's department" << endl;
//    cout << "3. Display all students" << endl;
//    cout << "4. Exit" << endl;
//    cout << "=============================" << endl;
//    cout << "Enter your choice: ";
//}
//int main()
//{
//    StudentEnrollmentSystem obj;
//    while (true)
//    {
//        displayMenu();
//        int choice;
//        cin >> choice;
//        if (choice == 1)
//        {
//            string studentID, studentName, studentDepartment;
//            cout << "Enter student ID: ";
//            cin >> studentID;
//            cout << "Enter student name: ";
//            cin.ignore();
//            getline(cin, studentName);
//            cout << "Enter student department: ";
//            getline(cin, studentDepartment);
//            obj.root = obj.insert(obj.root, studentID, studentName, studentDepartment);
//            cout << "Student added successfully." << endl;
//        }
//        else if (choice == 2)
//        {
//            string studentID, newDepartment;
//            cout << "Enter student ID: ";
//            cin >> studentID;
//            cout << "Enter new department: ";
//            cin >> newDepartment;
//            obj.updateDepartment(studentID, newDepartment);
//        }
//        else if (choice == 3)
//        {
//            cout << "List of all students:" << endl;
//            obj.inorder(obj.root);
//        }
//        else if (choice == 4)
//        {
//            cout << "Exiting program (^_^)|" << endl;
//            break;
//        }
//        else
//        {
//            cout << "Invalid choice. Please try again." << endl;
//        }
//
//        cout << endl;
//    }
//    return 0;
//}