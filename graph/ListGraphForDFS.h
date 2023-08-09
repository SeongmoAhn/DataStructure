// ListGraphForDFS.h
#include "AdjListGraph.h"

class ListGraphForDFS : public AdjListGraph {
    bool visited[MAX_SIZE];

public:
    ListGraphForDFS(int size) : AdjListGraph(size) {}

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

    void dfs(int v) {
        visited[v] = true;
        cout << "[" << v << "] ";
        
        for (Node *cur = graph[v]; cur != NULL; cur = cur->getLink()) {
            if (visited[cur->getVertex()] == false)
                dfs(cur->getVertex());
        }
    }
};
