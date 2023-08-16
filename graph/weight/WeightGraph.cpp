// WeightGraph.cpp
#include "WeightGraph.h"

int main() {
    WeightGraph graph(7);

    graph.insertEdge(0, 1, 29);
    graph.insertEdge(0, 5, 10);
    graph.insertEdge(1, 2, 16);
    graph.insertEdge(1, 6, 15);
    graph.insertEdge(2, 3, 12);
    graph.insertEdge(3, 4, 22);
    graph.insertEdge(3, 6, 18);
    graph.insertEdge(4, 5, 27);
    graph.insertEdge(4, 6, 25);

    graph.display();
}

/*
실행 결과 :
Weighted Graph by Adjacency Matrix
  0  29 INF INF INF  10 INF
 29   0  16 INF INF INF  15
INF  16   0  12 INF INF INF
INF INF  12   0  22 INF  18
INF INF INF  22   0  27  25
 10 INF INF INF  27   0 INF
INF  15 INF  18  25 INF   0
*/
