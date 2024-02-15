//#include <iostream>
//using namespace std;
//struct Node
//{
//    int data, height;
//    Node* left;
//    Node* right;
//};
//class AVLTree
//{
//private:
//    Node* root;
//public:
//    AVLTree()
//    {
//        root = nullptr;
//    }
//
//    int max(int a, int b)
//    {
//        if (a > b)
//        {
//            return a;
//        }
//        else
//        {
//            return b;
//        }
//    }
//    int getHeight(Node* node)
//    {
//        if (node == nullptr)
//        {
//            return 0;
//        }
//        else
//        {
//            return node->height;
//        }
//    }
//    int getBalance(Node* node)
//    {
//        if (node == nullptr)
//        {
//            return 0;
//        }
//        else
//        {
//            int leftSubtreeHeight = getHeight(node->left);
//            int rightSubtreeHeight = getHeight(node->right);
//            int balanceFactor = leftSubtreeHeight - rightSubtreeHeight;
//            return balanceFactor;
//        }
//    }
//    Node* rotateRight(Node* y)
//    {
//        Node* x = y->left;
//        Node* T2 = x->right;
//
//        x->right = y;
//        y->left = T2;
//
//        int leftYHeight = getHeight(y->left);
//        int rightYHeight = getHeight(y->right);
//        int yMaxSubtreeHeight = max(leftYHeight, rightYHeight);
//        int updatedYHeight = yMaxSubtreeHeight + 1;
//        y->height = updatedYHeight;
//
//        int leftXHeight = getHeight(x->left);
//        int rightXHeight = getHeight(x->right);
//        int xMaxSubtreeHeight = max(leftXHeight, rightXHeight);
//        int updatedXHeight = xMaxSubtreeHeight + 1;
//        x->height = updatedXHeight;
//        return x;
//    }
//    Node* rotateLeft(Node* x)
//    {
//        Node* y = x->right;
//        Node* T2 = y->left;
//        y->left = x;
//        x->right = T2;
//        int xLeftHeight = getHeight(x->left);
//        int xRightHeight = getHeight(x->right);
//        int xMaxSubtreeHeight = max(xLeftHeight, xRightHeight);
//        int updatedXHeight = xMaxSubtreeHeight + 1;
//        x->height = updatedXHeight;
//        int yLeftHeight = getHeight(y->left);
//        int yRightHeight = getHeight(y->right);
//        int yMaxSubtreeHeight = max(yLeftHeight, yRightHeight);
//        int updatedYHeight = yMaxSubtreeHeight + 1;
//        y->height = updatedYHeight;
//        return y;
//    }
//    Node* insert(Node* node, int data)
//    {
//        if (node == nullptr)
//        {
//            Node* newNode = new Node;
//            newNode->data = data;
//            newNode->left = nullptr;
//            newNode->right = nullptr;
//            newNode->height = 1;
//            return newNode;
//        }
//        if (data < node->data)
//        {
//            node->left = insert(node->left, data);
//        }
//        else if (data > node->data)
//        {
//            node->right = insert(node->right, data);
//        }
//        else
//        {
//            return node;
//        }
//        int leftHeight = getHeight(node->left);
//        int rightHeight = getHeight(node->right);
//        int maxSubtreeHeight = max(leftHeight, rightHeight);
//        int updatedHeight = 1 + maxSubtreeHeight;
//        node->height = updatedHeight;
//        int balance = getBalance(node);
//        // Left Left Case
//        if (balance > 1 && data < node->left->data)
//        {
//            return rotateRight(node);
//        }
//        // Right Right Case
//        if (balance < -1 && data > node->right->data)
//        {
//            return rotateLeft(node);
//        }
//        // Left Right Case
//        if (balance > 1 && data > node->left->data)
//        {
//            node->left = rotateLeft(node->left);
//            return rotateRight(node);
//        }
//        // Right Left Case
//        if (balance < -1 && data < node->right->data)
//        {
//            node->right = rotateRight(node->right);
//            return rotateLeft(node);
//        }
//        return node;
//    }
//    Node* minValueNode(Node* node)
//    {
//        Node* current = node;
//        while (current->left != nullptr)
//        {
//            current = current->left;
//        }
//        return current;
//    }
//    Node* deleteNode(Node* root, int k)
//    {
//        if (root == nullptr)
//        {
//            return root;
//        }
//        if (k < root->data)
//        {
//            root->left = deleteNode(root->left, k);
//        }
//        else if (k > root->data)
//        {
//            root->right = deleteNode(root->right, k);
//        }
//        else
//        {
//            if (root->left == nullptr || root->right == nullptr)
//            {
//                Node* temp;
//                if (root->left)
//                {
//                    temp = root->left;
//                }
//                else
//                {
//                    temp = root->right;
//                }
//                if (temp == nullptr)
//                {
//                    temp = root;
//                    root = nullptr;
//                }
//                else
//                    *root = *temp;
//
//                delete temp;
//            }
//            else
//            {
//                Node* temp = minValueNode(root->right);
//                root->data = temp->data;
//                root->right = deleteNode(root->right, temp->data);
//            }
//        }
//        if (root == nullptr)
//        {
//            return root;
//        }
//        int leftHeight = getHeight(root->left);
//        int rightHeight = getHeight(root->right);
//        int maxSubtreeHeight = (leftHeight > rightHeight) ? leftHeight : rightHeight;
//        int updatedHeight = 1 + maxSubtreeHeight;
//        root->height = updatedHeight;
//        int balance = getBalance(root);
//        // Left Left Case
//        if (balance > 1 && getBalance(root->left) >= 0)
//        {
//            return rotateRight(root);
//        }
//        // Left Right Case
//        if (balance > 1 && getBalance(root->left) < 0)
//        {
//            root->left = rotateLeft(root->left);
//            return rotateRight(root);
//        }
//        // Right Right Case
//        if (balance < -1 && getBalance(root->right) <= 0)
//        {
//            return rotateLeft(root);
//        }
//        // Right Left Case
//        if (balance < -1 && getBalance(root->right) > 0)
//        {
//            root->right = rotateRight(root->right);
//            return rotateLeft(root);
//        }
//        return root;
//    }
//    void display(Node* node)
//    {
//        if (node == nullptr)
//        {
//            return;
//        }
//        display(node->left);
//        cout << node->data << " ";
//        display(node->right);
//    }
//    void constructAndDisplay()
//    {
//        int n;
//        cout << "Enter the number of elements: ";
//        cin >> n;
//        cout << "Enter the elements: ";
//        for (int i = 0; i < n; i++)
//        {
//            int data;
//            cin >> data;
//            root = insert(root, data);
//        }
//        cout << "AVL Tree after construction: ";
//        display(root);
//        cout << endl;
//    }
//    Node* kthLargestNode(Node* node, int& k)
//    {
//        if (node == nullptr)
//        {
//            return nullptr;
//        }
//        Node* right = kthLargestNode(node->right, k);
//        if (right != nullptr)
//        {
//            return right;
//        }
//        k--;
//        if (k == 0)
//        {
//            return node;
//        }
//        return kthLargestNode(node->left, k);
//    }
//    Node* deleteKthLargest(Node* root, int k)
//    {
//        int count = k;
//        Node* kthLargest = kthLargestNode(root, count);
//
//        if (kthLargest == nullptr)
//        {
//            return root;
//        }
//        root = deleteNode(root, kthLargest->data);
//        return root;
//    }
//    void deleteAndDisplay()
//    {
//        int k;
//        cout << "Enter the value of k: ";
//        cin >> k;
//        root = deleteKthLargest(root, k);
//        cout << "AVL Tree after deletion of the kth largest value node: ";
//        display(root);
//        cout << endl;
//    }
//};
//int main()
//{
//    AVLTree a;
//    int choice;
//    while (true)
//    {
//        cout << "Menu:\n";
//        cout << "1. Construct AVL Tree\n";
//        cout << "2. Delete kth largest value node\n";
//        cout << "3. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        if (choice == 1)
//        {
//            a.constructAndDisplay();
//        }
//        else if (choice == 2)
//        {
//            a.deleteAndDisplay();
//        }
//        else if (choice == 3)
//        {
//            cout << "Exiting...\n";
//            break;
//        }
//        else
//        {
//            cout << "Invalid choice. Please enter a valid option.\n";
//        }
//    }
//    system("pause>0");
//    return 0;
//}
