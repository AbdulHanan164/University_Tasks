//#include <iostream>
//using namespace std;
//class Graph {
//private:
//    int numVertices;      // Number of vertices
//    int** adjacencyMatrix;  // Adjacency matrix
//    static const int INT_MAX_CUSTOM = 2147483647; // Custom definition of INT_MAX
//public:
//    Graph(int numVertices);
//    void addEdge(char v, char w, int weight);
//    void dijkstra(char src);
//    ~Graph();  // Destructor to free dynamically allocated memory
//};
//Graph::Graph(int numVertices) {
//    this->numVertices = numVertices;
//    // Dynamically allocate memory for the adjacency matrix
//    adjacencyMatrix = new int* [numVertices];
//    for (int i = 0; i < numVertices; ++i) {
//        adjacencyMatrix[i] = new int[numVertices];
//        for (int j = 0; j < numVertices; ++j) {
//            adjacencyMatrix[i][j] = 0;
//        }
//    }
//}
//void Graph::addEdge(char v, char w, int weight) {
//    int indexV = v - 'A';
//    int indexW = w - 'A';
//    adjacencyMatrix[indexV][indexW] = weight;
//}
//void Graph::dijkstra(char src) {
//    // Assuming characters are in consecutive order
//    int sourceIndex = src - 'A';
//    int* distance = new int[numVertices];
//    bool* sptSet = new bool[numVertices];
//    for (int i = 0; i < numVertices; ++i) {
//        distance[i] = INT_MAX_CUSTOM;
//        sptSet[i] = false;
//    }
//    distance[sourceIndex] = 0;
//    for (int count = 0; count < numVertices - 1; ++count) {
//        int currentVertex, minDistance = INT_MAX_CUSTOM;
//        for (int v = 0; v < numVertices; ++v) {
//            if (!sptSet[v] && distance[v] <= minDistance) {
//                currentVertex = v;
//                minDistance = distance[v];
//            }
//        }
//        sptSet[currentVertex] = true;
//        for (int v = 0; v < numVertices; ++v) {
//            if (!sptSet[v] && adjacencyMatrix[currentVertex][v] && distance[currentVertex] != INT_MAX_CUSTOM && distance[currentVertex] + adjacencyMatrix[currentVertex][v] < distance[v]) {
//                distance[v] = distance[currentVertex] + adjacencyMatrix[currentVertex][v];
//            }
//        }
//    }
//    cout << "Shortest distances from the source node " << src << " to all other nodes:\n";
//    for (int i = 0; i < numVertices; ++i) {
//        cout << "Node " << char('A' + i) << ": ";
//        if (distance[i] == INT_MAX_CUSTOM)
//            cout << "Not reachable\n";
//        else
//            cout << distance[i] << "\n";
//    }
//}
//Graph::~Graph() {
//    for (int i = 0; i < numVertices; ++i) {
//        delete[] adjacencyMatrix[i];
//    }
//    delete[] adjacencyMatrix;
//}
//int main() {
//    int vertices, edges;
//    char source;
//    cout << "Enter the number of vertices: ";
//    cin >> vertices;
//    Graph g(vertices);
//    cout << "Enter the number of edges: ";
//    cin >> edges;
//    cout << "Enter the details of each edge (source, destination, and weight):\n";
//    for (int i = 0; i < edges; ++i) {
//        char u, v;
//        int weight;
//        cin >> u >> v >> weight;
//        g.addEdge(u, v, weight);
//    }
//    cout << "Enter the source node: ";
//    cin >> source;
//    g.dijkstra(source);
//    return 0;
//}
