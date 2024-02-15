#include <iostream>

using namespace std;

const int MAX_NODES = 100;

bool dfsDirected(int node, int graph[MAX_NODES][MAX_NODES], bool visited[MAX_NODES], bool stack[MAX_NODES], int n) {
    visited[node] = true;
    stack[node] = true;

    for (int neighbor = 0; neighbor < n; ++neighbor) {
        if (graph[node][neighbor] && !visited[neighbor]) {
            if (dfsDirected(neighbor, graph, visited, stack, n))
                return true;
        }
        else if (graph[node][neighbor] && stack[neighbor]) {
            return true;
        }
    }

    stack[node] = false;
    return false;
}

bool hasCycleDirected(int graph[MAX_NODES][MAX_NODES], int n) {
    bool visited[MAX_NODES];
    bool stack[MAX_NODES];

    for (int i = 0; i < n; ++i) {
        visited[i] = false;
        stack[i] = false;
    }

    for (int node = 0; node < n; ++node) {
        if (!visited[node]) {
            if (dfsDirected(node, graph, visited, stack, n))
                return true;
        }
    }

    return false;
}

bool dfsUndirected(int node, int parent, int graph[MAX_NODES][MAX_NODES], bool visited[MAX_NODES], int n) {
    visited[node] = true;

    for (int neighbor = 0; neighbor < n; ++neighbor) {
        if (graph[node][neighbor] && !visited[neighbor]) {
            if (dfsUndirected(neighbor, node, graph, visited, n))
                return true;
        }
        else if (graph[node][neighbor] && neighbor != parent) {
            return true;
        }
    }

    return false;
}

bool hasCycleUndirected(int graph[MAX_NODES][MAX_NODES], int n) {
    bool visited[MAX_NODES];

    for (int i = 0; i < n; ++i) {
        visited[i] = false;
    }

    for (int node = 0; node < n; ++node) {
        if (!visited[node]) {
            if (dfsUndirected(node, -1, graph, visited, n))
                return true;
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int graph[MAX_NODES][MAX_NODES] = { {0} };
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> graph[i][j];

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Detect Cycle in Directed Graph\n";
        cout << "2. Detect Cycle in Undirected Graph\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (hasCycleDirected(graph, n))
                cout << "Directed Graph has a cycle.\n";
            else
                cout << "Directed Graph doesn't have a cycle.\n";
            break;

        case 2:
            if (hasCycleUndirected(graph, n))
                cout << "Undirected Graph has a cycle.\n";
            else
                cout << "Undirected Graph doesn't have a cycle.\n";
            break;

        case 3:
            cout << "Exiting the program.\n";
            break;

        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 3);

    return 0;
}
