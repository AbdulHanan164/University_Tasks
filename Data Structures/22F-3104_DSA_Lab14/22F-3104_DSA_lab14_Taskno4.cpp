#include <iostream>

using namespace std;

int** createMatrix(int rows, int cols) {
    int** mat = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
        fill(mat[i], mat[i] + cols, 0);
    }
    return mat;
}

void deleteMatrix(int** mat, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
}

int calculateDeterminant(int** mat, int n) {
    if (n == 1) {
        return mat[0][0];
    }

    int determinant = 0;
    int** subMatrix = createMatrix(n - 1, n - 1);

    for (int col = 0; col < n; ++col) {
        int subMatrixRow = 0;
        for (int row = 1; row < n; ++row) {
            int subMatrixCol = 0;
            for (int j = 0; j < n; ++j) {
                if (j != col) {
                    subMatrix[subMatrixRow][subMatrixCol] = mat[row][j];
                    ++subMatrixCol;
                }
            }
            ++subMatrixRow;
        }

        determinant += (col % 2 == 0 ? 1 : -1) * mat[0][col] * calculateDeterminant(subMatrix, n - 1);
    }

    deleteMatrix(subMatrix, n - 1);

    return determinant;
}

int calculateSpanningTrees(int n, int** adjMatrix) {
    for (int i = 0; i < n; ++i) {
        int degree = 0;
        for (int j = 0; j < n; ++j) {
            degree += adjMatrix[i][j];
        }
        adjMatrix[i][i] = degree;
    }

    int reducedNodes = n - 1;
    int** reducedMatrix = createMatrix(reducedNodes, reducedNodes);

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            reducedMatrix[i - 1][j - 1] = adjMatrix[i][j];
        }
    }

    int numSpanningTrees = calculateDeterminant(reducedMatrix, reducedNodes);

    deleteMatrix(reducedMatrix, reducedNodes);

    return numSpanningTrees;
}

int main() {
    int nodes, edges;
    cout << "Enter the number of nodes: ";
    cin >> nodes;

    cout << "Enter the number of edges: ";
    cin >> edges;

    int** adjacencyMatrix = createMatrix(nodes, nodes);

    cout << "Enter the details of each edge (node u and v):" << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        adjacencyMatrix[u - 1][v - 1] = 1;
        adjacencyMatrix[v - 1][u - 1] = 1;
    }

    int numSpanningTrees = calculateSpanningTrees(nodes, adjacencyMatrix);
    cout << "Number of Spanning Trees: " << numSpanningTrees << endl;

    deleteMatrix(adjacencyMatrix, nodes);

    return 0;
}
