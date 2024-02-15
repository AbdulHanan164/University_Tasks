//#include <iostream>
//using namespace std;
//bool isBipartite(int** adjMatrix, int numNodes, int startNode) {
//    int* color = new int[numNodes];
//    bool* visited = new bool[numNodes] {false};
//    color[startNode] = 0;
//    visited[startNode] = true;
//    int* queue = new int[numNodes];
//    int front = -1;
//    int rear = -1;
//    queue[++rear] = startNode;
//    while (front != rear) {
//        int currentNode = queue[++front];
//        for (int i = 0; i < numNodes; i++) {
//            if (adjMatrix[currentNode][i]) {
//                if (!visited[i]) {
//                    color[i] = 1 - color[currentNode]; // Assign the opposite color to the neighbor
//                    visited[i] = true;
//                    queue[++rear] = i;
//                }
//                else if (color[i] == color[currentNode]) {
//                    // If an adjacent node is colored with same color it is not bipartiled
//                    delete[] color;
//                    delete[] visited;
//                    delete[] queue;
//                    return false;
//                }
//            }
//        }
//    }
//    delete[] color;
//    delete[] visited;
//    delete[] queue;
//    return true;
//}
//int main() {
//    int numNodes, numEdges;
//    cout << "Enter the number of nodes: ";
//    cin >> numNodes;
//    cout << "Enter the number of edges: ";
//    cin >> numEdges;
//    int** adjMatrix = new int* [numNodes];
//    for (int i = 0; i < numNodes; i++) {
//        adjMatrix[i] = new int[numNodes] {0};
//    }
//    cout << "Enter the edges (node1 node2):" << endl;
//    for (int i = 0; i < numEdges; i++) {
//        int node1, node2;
//        cin >> node1 >> node2;
//        adjMatrix[node1][node2] = 1;
//        adjMatrix[node2][node1] = 1; // Assuming an undirected graph
//    }
//    // Check if the graph is bipartite
//    bool bipartite = true;
//    for (int i = 0; i < numNodes; i++) {
//        if (!isBipartite(adjMatrix, numNodes, i)) {
//            bipartite = false;
//            break;
//        }
//    }
//    // Output the result
//    if (bipartite) {
//        cout << "The graph is bipartite." << endl;
//    }
//    else {
//        cout << "The graph is not bipartite." << endl;
//    }
//    // Deallocate memory
//    for (int i = 0; i < numNodes; i++) {
//        delete[] adjMatrix[i];
//    }
//    delete[] adjMatrix;
//    return 0;
//}