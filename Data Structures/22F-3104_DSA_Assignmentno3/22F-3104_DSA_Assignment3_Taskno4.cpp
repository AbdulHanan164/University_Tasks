//#include<iostream>
//using namespace std;
//struct avlnode {
//    avlnode* right;
//    avlnode* left;
//    int num, height;
//};
//
//class avltree {
//    avlnode* root;
//    bool check;
//public:
//    avltree() {
//        root = nullptr;
//        check = false;
//    }
//    avlnode* getroot() {
//        return root;
//    }
//    int height(avlnode* temp) {
//        if (temp == nullptr) {
//            return -1;
//       }
//        else {
//            return temp->height;
//        }
//    }
//
//    avlnode* llrotation(avlnode* parent) {
//        avlnode* temp;
//        temp = parent->left;
//        parent->left = temp->right;
//        temp->right = parent;
//        return temp;
//    }
//
//    avlnode* RRrotation(avlnode* parent) {
//        avlnode* temp;
//        temp = parent->right;
//        parent->right = temp->left;
//        temp->left = parent;
//        return temp;
//    }
//
//    avlnode* LRrotation(avlnode* parent) {
//        avlnode* temp;
//        temp = parent->left;
//        parent->left = RRrotation(temp);
//        return llrotation(parent);
//    }
//
//    avlnode* RLrotation(avlnode* parent) {
//        avlnode* temp;
//        temp = parent->right;
//        parent->right = llrotation(temp);
//        return RRrotation(parent);
//    }
//
//    avlnode* Insert(int X,avlnode* T) {
//        if (T == nullptr) {
//            T = new avlnode;
//            T->num = X;
//            T->left = T->right = nullptr;
//        }
//        else if (X < T->num) {
//            T->left = Insert(X, T->left);
//            if (height(T->left) - height(T->right)>= 2)
//                if (X < T->left->num)
//                    T = llrotation(T); 
//                else
//                    T = LRrotation(T); 
//        }
//        else if (X > T->num) {
//            T->right = Insert(X,T->right);
//            if (height(T->right) - height(T->left) >= 2)
//                if (X > T->right->num)
//                    T = RRrotation(T); 
//                else
//                    T = RLrotation(T); 
//        }
//        T->height = max(height(T->left), height(T->right)) + 1;
//        return T;
//    }
//
//    void inordertraversal(avlnode* temp) {
//        if (temp != nullptr) {
//            inordertraversal(temp->left);
//            cout <<"Num="<< temp->num << endl;
//            inordertraversal(temp->right);
//        }
//    }
//    bool isavl(avlnode*temp) {
//        if (temp == nullptr) {
//            return true;
//        }
//        else {
//            int balance = balanceFactor(temp);
//            if (balance < -1 || balance > 1) {
//                return false;
//            }
//            return isavl(temp->left) && isavl(temp->right);
//        }
//    }
//    int balanceFactor(avlnode* node) {
//        if (node == nullptr) {
//            return 0;
//        }
//        return height(node->left) - height(node->right);
//    }
//
//    bool rootedornot(avlnode* node, int x, int y) {
//        if (node == nullptr) {
//            return true; 
//        }
//
//        if (node->num >= x && node->num <= y) {     
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//};
//
//int main() {
//    bool avlcheck,check1,check2;
//    avltree a;
//    avlnode *tempnode = a.getroot();
//    int sel,num,num1, num2;
//    while (true) {
//        cout << "1.inserting a newnode\n";
//        cout << "2.check rootness and avl or not \n";
//        cout << "3.printall nodes\n";
//        cin >> sel;
//        if (sel == 1) {
//            cout << "enter num ";
//            cin >> num;
//           tempnode= a.Insert(num,tempnode);
//        }
//        else if (sel == 2) {
//            cout << "enter 2 values";
//            cin >> num1 >> num2;
//            check1=a.rootedornot(tempnode->right, num1, num2);
//            if (check1 == false) {
//                check2 = a.rootedornot(tempnode->left, num1, num2);
//                if (check2 == false) {
//                    cout << "no root exist";
//                }
//                else {
//                    avlcheck = a.isavl(tempnode->left);
//                    if (avlcheck == true) {
//                        cout << "The avl tree is rooted between 2 values and the tree is avl";
//                    }
//                    else {
//                        cout << "The avl tree is rooted between 2 values but he tree is not avl";
//                    }
//                }
//            }
//            else {
//                avlcheck = a.isavl(tempnode->right);
//                if (avlcheck == true) {
//                    cout << "The avl tree is rooted between 2 values and the tree is avl";
//                }
//            }
//        }
//        else if (sel == 3) {
//            a.inordertraversal(tempnode);
//        }
//        else {
//            exit(1);
//        }
//    }
//}