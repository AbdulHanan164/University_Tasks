//#include <iostream>
//using namespace std;
//#define MAX_NODES 100
//// Custom Queue implementation
//class Queue {
//private:
//    int front, rear, size;
//    int elements[MAX_NODES];
//public:
//    Queue() {
//        front = rear = -1;
//        size = 0;
//    }
//    bool isEmpty() {
//        return size == 0;
//    }
//    bool isFull() {
//        return size == MAX_NODES;
//    }
//    void enqueue(int item) {
//        if (isFull()) {
//            cout << "Queue is full." << endl;
//            return;
//        }
//        if (rear == -1) {
//            front = rear = 0;
//        }
//        else {
//            rear = (rear + 1) % MAX_NODES;
//        }
//        elements[rear] = item;
//        size++;
//    }
//    int dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return -1;
//        }
//        int item = elements[front];
//        if (front == rear) {
//            front = rear = -1;
//        }
//        else {
//            front = (front + 1) % MAX_NODES;
//        }
//        size--;
//        return item;
//    }
//};
//// Function to perform BFS
//bool bfs(int adjMatrix[MAX_NODES][MAX_NODES], int numNodes, int startNode, bool visited[MAX_NODES]) {
//    Queue queue;
//    // Mark the start node as visited and enqueue it
//    visited[startNode] = true;
//    queue.enqueue(startNode);
//    while (!queue.isEmpty()) {
//        int currentNode = queue.dequeue();
//        // Iterate through all the adjacent nodes of the current node
//        for (int i = 0; i < numNodes; i++) {
//            if (adjMatrix[currentNode][i] == 1 && !visited[i]) {
//                visited[i] = true;
//                queue.enqueue(i);
//            }
//        }
//    }
//    for (int i = 0; i < numNodes; i++) {
//        if (!visited[i]) {
//            return false;
//        }
//    }
//
//    return true;
//}
//// Function to check if the graph is connected
//bool isConnected(int adjMatrix[MAX_NODES][MAX_NODES], int numNodes) {
//    bool visited[MAX_NODES] = { false };
//
//    // Perform BFS starting from node 0
//    return bfs(adjMatrix, numNodes, 0, visited);
//}
//int main() {
//    int numNodes, numEdges;
//    int adjMatrix[MAX_NODES][MAX_NODES] = { 0 };
//    cout << "Enter the number of nodes: ";
//    cin >> numNodes;
//    cout << "Enter the number of edges: ";
//    cin >> numEdges;
//    cout << "Enter the edges (node1 node2):" << endl;
//    for (int i = 0; i < numEdges; i++) {
//        int node1, node2;
//        cin >> node1 >> node2;
//        // Update the adjacency matrix to represent the edges
//        adjMatrix[node1][node2] = 1;
//        adjMatrix[node2][node1] = 1;
//    }
//    // Check if the graph is connected
//    if (isConnected(adjMatrix, numNodes)) {
//        cout << "The graph is connected." << endl;
//    }
//    else {
//        cout << "The graph is not connected." << endl;
//    }
//    return 0;
//}