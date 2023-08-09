// MatGraphForBFS.cpp
#include "MatGraphForBFS.h"

int main() {
    MatGraphForBFS graph(4);

    graph.insertEdge(0, 1);
    graph.insertEdge(0, 3);
    graph.insertEdge(1, 2);
    graph.insertEdge(1, 3);
    graph.insertEdge(2, 3);

    graph.display();
    graph.bfs(0); cout << endl;
}
