// kruskal.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
#define SIZE 10001

int V, E;
int parent[SIZE];
vector<tuple<int, int, int>> graph;
bool visited[SIZE];
long long ans;

int findParent(int u) {
    if (parent[u] == u) return u;
    return parent[u] = findParent(parent[u]);
}

bool unionParent(int v1, int v2) {
    int u = findParent(v1);
    int v = findParent(v2);

    if (u == v) return false;
    else {
        parent[u] = v;
        return true;
    }
}

void kruskal() {
    for (int i = 0; i < E; i++) {
        if (unionParent(get<1>(graph[i]), get<2>(graph[i])))
            ans += get<0>(graph[i]);
    }
}

int main() {
    cin >> V >> E;
    for (int i = 1; i <= V; i++) parent[i] = i;
    for (int i = 0; i < E; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph.push_back({weight, u, v});
    }
    sort(graph.begin(), graph.end());

    kruskal();
    cout << ans << endl;
}
