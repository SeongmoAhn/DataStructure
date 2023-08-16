// AdjMatGraph.h
#include <iostream>
#define MAX_SIZE 256
using namespace std;

inline void errorPrint(const char *message) { cout << message << endl; exit(1); }

class AdjMatGraph {
protected:
    int size;
    int graph[MAX_SIZE][MAX_SIZE];

public:
    AdjMatGraph(int size) {
        this->size = size;
        for (int i = 0; i < size; i++)  {
            for (int j = 0; j < size; j++)
                graph[i][j] = 0;
        }
    }

    int getEdge(int row, int col) { return graph[row][col]; }
    void setEdge(int row, int col) { graph[row][col] = 1; }

    void insertEdge(int u, int v) {
        setEdge(u, v);
        setEdge(v, u);
    }

    void display() {
        cout << "Graph by Adjacency Matrix" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << graph[i][j] << ' ';
            }
            cout << endl;
        }
    }
};
