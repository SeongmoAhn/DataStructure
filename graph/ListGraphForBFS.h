// ListGraphForBFS.h
#include "AdjListGraph.h"
#include "circularQueue.h"

class ListGraphForBFS : public AdjListGraph {
    bool visited[MAX_SIZE];

public:
    ListGraphForBFS(int size) : AdjListGraph(size) {}

    void reset() {
        for (int i = 0 ;i < size; i++) {
            visited[i] = false;
        }
    }

    bool isLinked(int u, int v) {
        for (Node *cur = graph[u]; cur != NULL; cur = cur->getLink()) {
            if (cur->getVertex() == v) return true;
        }
        return false;
    }

    void bfs(int v) {
        visited[v] = true;
        cout << "[" << v << "] ";

        CircularQueue queue;
        queue.enqueue(v);

        while (!queue.isEmpty()) {
            int cur = queue.dequeue();

            for (Node *u = graph[cur]; u != NULL; u = u->getLink()) {
                int curV = u->getVertex();
                if (!visited[curV]) {
                    visited[curV] = true;
                    cout << "[" << curV << "] ";
                    queue.enqueue(curV);
                }
            }
        }
    }
};
