#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'
#define pii pair<int, int>
#define INF 1e9
#define SIZE 20001

int V, E, start;
vector<pii> graph[SIZE];
int distTable[SIZE];
priority_queue<pii> pq;

void initInput() {
    cin >> V >> E >> start;
    for (int i = 0; i < E; i++) {
        int v1, v2, w; cin >> v1 >> v2 >> w;
        graph[v1].push_back({v2, w});
    }
}

void dijkstra() {
    fill(distTable, distTable + SIZE, INF);
    distTable[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int curDist = -pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        for (int i = 0; i < graph[curNode].size(); i++) {
            int nextDist = graph[curNode][i].second;
            int nextNode = graph[curNode][i].first;

            int cost = distTable[curNode] + nextDist;

            if (cost < distTable[nextNode]) {
                distTable[nextNode] = cost;
                pq.push({-cost, nextNode});
            }
        }
    }
}

void solve() {
    dijkstra();
    for (int i = 1; i <= V; i++) {
        if (distTable[i] == INF) cout << "INF" << endl;
        else cout << distTable[i] << endl;
    }
}

int main(void) {
    cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);
    initInput();
    solve();

    return 0;
}
