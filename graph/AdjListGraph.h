// AdjListGraph.h
#include "Node.h"
#define MAX_SIZE 256
using namespace std;

class AdjListGraph {
protected:
    int size;
    Node *graph[MAX_SIZE];

public:
    AdjListGraph(int size) {
        this->size = size;
        for (int i = 0; i < size; i++)
            graph[i] = NULL;
    }
    ~AdjListGraph() {
        for (int i = 0; i < size; i++)
            if (graph[i] != NULL) delete graph[i];
    }

    void insertEdge(int u, int v) {
        graph[u] = new Node(v, graph[u]);
        graph[v] = new Node(u, graph[v]);
    }

    void display() {
        cout << "Graph by Adjacency List" << endl;
        for (int i = 0 ; i < size; i++) {
            Node *cur = graph[i];
            while (cur != NULL) {
                cout << cur->getVertex() << ' ';
                cur = cur->getLink();
            }
            cout << endl;
        }
    }
};
