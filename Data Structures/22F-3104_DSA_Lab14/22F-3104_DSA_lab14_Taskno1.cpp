//#include <iostream>
//#include <string>
//using namespace std;
//struct Node {
//    string label;
//    Node* next;
//};
//// Function to create a graph from the given data
//Node* createGraph() {
//    Node* graph = nullptr;
//    int numPersons;
//    cout << "Enter the number of persons: ";
//    cin >> numPersons;
//    cin.ignore(); // Ignore the newline character
//    for (int i = 0; i < numPersons; i++) {
//        string person;
//        cout << "Enter the name of person " << (i + 1) << ": ";
//        getline(cin, person);
//
//        Node* newNode = new Node{ person, nullptr };
//
//        if (graph == nullptr) {
//            graph = newNode;
//        }
//        else {
//            Node* curr = graph;
//            while (curr->next != nullptr) {
//                curr = curr->next;
//            }
//            curr->next = newNode;
//        }
//    }
//
//    return graph;
//}
//// Function to add a connection between two individuals
//void addConnection(Node* graph) {
//    string person1, person2;
//    cout << "Enter the first person: ";
//    cin.ignore(); // Ignore the newline character
//    getline(cin, person1);
//    cout << "Enter the second person: ";
//    getline(cin, person2);
//    Node* curr = graph;
//    Node* person1Node = nullptr;
//    Node* person2Node = nullptr;
//    // Find the nodes corresponding to the entered persons
//    while (curr != nullptr) {
//        if (curr->label == person1) {
//            person1Node = curr;
//        }
//        else if (curr->label == person2) {
//            person2Node = curr;
//        }
//        if (person1Node != nullptr && person2Node != nullptr) {
//            break;
//        }
//
//        curr = curr->next;
//    }
//    // Add the connection to the adjacency list
//    if (person1Node != nullptr && person2Node != nullptr) {
//        Node* newNode1 = new Node{ person2Node->label, person1Node->next };
//        person1Node->next = newNode1;
//
//        Node* newNode2 = new Node{ person1Node->label, person2Node->next };
//        person2Node->next = newNode2;
//
//        cout << "Connection added successfully." << endl;
//    }
//    else {
//        cout << "One or both persons not found." << endl;
//    }
//}
//// Function to count the number of connections for each person
//string findMostSocialPerson(Node* graph) {
//    int maxConnections = 0;
//    string mostSocialPerson;
//    Node* curr = graph;
//    while (curr != nullptr) {
//        int connections = 0;
//        Node* neighbor = curr->next;
//
//        while (neighbor != nullptr) {
//            connections++;
//            neighbor = neighbor->next;
//        }
//
//        if (connections > maxConnections) {
//            maxConnections = connections;
//            mostSocialPerson = curr->label;
//        }
//
//        curr = curr->next;
//    }
//
//    return mostSocialPerson;
//}
//int main() {
//    Node* graph = createGraph();
//
//    int choice;
//    do {
//        cout << "\nMenu:" << endl;
//        cout << "1. Add Connection" << endl;
//        cout << "2. Determine Most Social Person" << endl;
//        cout << "3. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            addConnection(graph);
//            break;
//        }
//        case 2: {
//            string mostSocialPerson = findMostSocialPerson(graph);
//            cout << "The most social person is: " << mostSocialPerson << endl;
//            break;
//        }
//        case 3: {
//            cout << "Exit program (^_^)| " << endl;
//            break;
//        }
//        default:
//            cout << "Invalid choice" << endl;
//        }
//
//    } while (choice != 3);
//    // Clean up the graph
//    Node* curr = graph;
//    while (curr != nullptr) {
//        Node* temp = curr;
//        curr = curr->next;
//        delete temp;
//    }
//    return 0;
//}
