//#include <iostream>
//using namespace std;
//struct Node {
//	int data;
//	Node* left;
//	Node* right;
//	Node(int value) {
//		data = value;
//		left = nullptr;
//		right = nullptr;
//	}
//	Node* insert(Node* root, int data) {
//		if (root == nullptr) {
//			return new Node(data);
//		}
//		if (data < root->data) {
//			root->left = insert(root->left, data);
//		}
//		else if (data >= root->data) {
//			root->right = insert(root->right, data);
//		}
//		return root;
//	}
//	void display(Node* root) {
//		if (root == nullptr) {
//			return;
//		}
//		display(root->left);
//		cout << root->data << " ";
//		display(root->right);
//	}
//};
//Node* GreaterTree(Node* root, int& sum) {
//	if (root == nullptr) {
//		return nullptr;
//	}
//	GreaterTree(root->right, sum);
//	sum = sum + root->data;
//	root->data = sum;
//	GreaterTree(root->left, sum);
//	return root;
//}
//int main()
//{
//	Node* current = nullptr;
//	int num_of_nodes, sum = 0;
//	cout << "Enter the number of elements in the tree: ";
//	cin >> num_of_nodes;
//	int* arr = new int[num_of_nodes];
//	for (int i = 0; i < num_of_nodes; i++) {
//		cout << "Enter the element " << i + 1 << ": ";
//		cin >> arr[i];
//		current = current->insert(current, arr[i]);
//	}
//	Node* greaterTree = GreaterTree(current, sum);
//	cout << "\nGreater tree is: ";
//	greaterTree->display(greaterTree);
//	delete[] arr;
//	return 0;
//}