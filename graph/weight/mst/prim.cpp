// prim.cpp
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define SIZE 10001

int V, E;
vector<pair<int, int>> graph[SIZE];
priority_queue<pair<int, int>> pq;
bool visited[SIZE];
long long ans;

void prim() {
    pq.push({0, 1});

    while (!pq.empty()) {
        int curWeight = -pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        if (visited[curNode]) continue;

        visited[curNode] = true;
        ans += curWeight;

        for (int i = 0; i < graph[curNode].size(); i++) {
            int nextNode = graph[curNode][i].first;
            int nextWeight = graph[curNode][i].second;

            pq.push({-nextWeight, nextNode});
        }
    }
}

int main() {
    cin >> V >> E;
    for (int i = 0; i < E; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u].push_back({v, weight});
        graph[v].push_back({u, weight});
    }

    prim();
    cout << ans << endl;

    return 0;
}
