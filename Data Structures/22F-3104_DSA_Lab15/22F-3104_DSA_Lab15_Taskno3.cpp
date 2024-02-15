//#include <iostream>
//using namespace std;
//#define NUM_VERTICES 4
//#define INT_MAX_VALUE 2147483647
//// Function to find the index of the vertex with the minimum distance value
//int minDistance(int distances[], bool sptSet[]) {
//    int min = INT_MAX_VALUE, minIndex;
//    for (int vertex = 0; vertex < NUM_VERTICES; vertex++)
//        if (!sptSet[vertex] && distances[vertex] <= min)
//            min = distances[vertex], minIndex = vertex;
//    return minIndex;
//}
//// Function to print the distances from the source to all vertices
//void printSolution(int distances[]) {
//   cout << "Vertex \t Distance from Source\n";
//    for (int i = 0; i < NUM_VERTICES; i++)
//       cout << i << " \t\t\t\t" << distances[i] <<endl;
//}
//// Function to perform Dijkstra's algorithm to find the shortest paths
//void dijkstra(int graph[NUM_VERTICES][NUM_VERTICES], int source) {
//    int distances[NUM_VERTICES];
//    bool sptSet[NUM_VERTICES];
//    for (int i = 0; i < NUM_VERTICES; i++)
//        distances[i] = INT_MAX_VALUE, sptSet[i] = false;
//    distances[source] = 0;
//    for (int count = 0; count < NUM_VERTICES - 1; count++) {
//        int u = minDistance(distances, sptSet);
//        sptSet[u] = true;
//        // Update the distances of the adjacent vertices
//        for (int v = 0; v < NUM_VERTICES; v++)
//            if (!sptSet[v] && graph[u][v] && distances[u] != INT_MAX_VALUE && distances[u] + graph[u][v] < distances[v])
//                distances[v] = distances[u] + graph[u][v];
//    }
//    printSolution(distances);
//}
//int main() {
//    int graph[NUM_VERTICES][NUM_VERTICES];
//   cout << "Enter the graph data (4x4 adjacency matrix):\n";
//    for (int i = 0; i < NUM_VERTICES; ++i)
//        for (int j = 0; j < NUM_VERTICES; ++j)
//           cin >> graph[i][j];
//   cout << "\nMenu:\n";
//   cout << "1. Find shortest paths using Dijkstra's algorithm\n";
//   cout << "2. Exit\n";
//   cout << "Enter your choice: ";
//    int userChoice;
//   cin >> userChoice;
//    switch (userChoice) {
//    case 1:
//       cout << "Enter the source node: ";
//        int sourceNode;
//       cin >> sourceNode;
//        dijkstra(graph, sourceNode);
//        break;
//    case 2:
//       cout << "Exit program (^_^)| :\n";
//        return 0;
//    default:
//       cout << "Invalid choice\n";
//        return 0;
//    }
//    return 0;
//}
