// MatGraphForDFS.h
#include "AdjMatGraph.h"

class MatGraphForDFS : public AdjMatGraph {
    bool visited[MAX_SIZE];

public:
    MatGraphForDFS(int size) : AdjMatGraph(size) {}
    void reset() {
        for (int i = 0; i < size; i++) {
            visited[i] = false;
        }
    }

    bool isLinked(int u, int v) { return getEdge(u, v) == 1; }

    void dfs(int v) {
        visited[v] = true;
        cout << "[" << v << "] ";
        
        for (int u = 0; u < size; u++) {
            if (isLinked(v, u) && visited[u] == false)
                dfs(u);
        }
    }
};
