// ListGraphForDFS.cpp
#include "ListGraphForDFS.h"

int main() {
    ListGraphForDFS graph(4);

    graph.insertEdge(0, 1);
    graph.insertEdge(0, 3);
    graph.insertEdge(1, 2);
    graph.insertEdge(1, 3);
    graph.insertEdge(2, 3);

    graph.display();
    graph.dfs(0); cout << endl;
}
