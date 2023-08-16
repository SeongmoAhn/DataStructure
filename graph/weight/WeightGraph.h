// WeightGraph.h
#include "AdjMatGraph.h"
#define INF 1e9

class WeightGraph : public AdjMatGraph {
public:
    WeightGraph(int size) : AdjMatGraph(size) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j) continue;
                graph[i][j] = INF;
            }
        }
    }
    void insertEdge(int u, int v, int weight) {
        if (weight > INF) weight = INF;
        setEdge(u, v, weight);
        setEdge(v, u, weight);
    }

    void setEdge(int row, int col, int weight) { graph[row][col] = weight; }

    bool hasEdge(int i, int j) { return (getEdge(i, j) < INF); }

    void display() {
        cout << "Weighted Graph by Adjacency Matrix" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (graph[i][j] == INF) {
                    cout.width(3);
                    cout << "INF ";
                    continue;
                }
                cout.width(3);
                cout << graph[i][j] << ' ';
            }
            cout << endl;
        }
    }
};
