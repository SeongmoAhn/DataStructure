// MatGraphForBFS.h
#include "AdjMatGraph.h"
#include "circularQueue.h"

class MatGraphForBFS : public AdjMatGraph {
    bool visited[MAX_SIZE];

public:
    MatGraphForBFS(int size) : AdjMatGraph(size) {}
    void reset() {
        for (int i = 0; i < size; i++) {
            visited[i] = false;
        }
    }

    bool isLinked(int u, int v) { return getEdge(u, v) == 1; }

    void bfs(int v) {
        visited[v] = true;
        cout << "[" << v << "] ";

        CircularQueue queue;
        queue.enqueue(v);

        while (!queue.isEmpty()) {
            int cur = queue.dequeue();

            for (int u = 0; u < size; u++) {
                if (isLinked(cur, u) && visited[u] == false) {
                    visited[u] = true;
                    cout << "[" << u << "] ";
                    queue.enqueue(u);
                }
            }
        }
    }
};
