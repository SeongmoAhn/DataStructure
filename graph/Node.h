// Node.h
#include <iostream>

class Node {
protected:
    int vertex;
    Node *link;

public:
    Node(int vertex, Node *link) : vertex(vertex), link(link) {}
    ~Node() { if (link != NULL) delete link; }

    int getVertex() { return vertex; }
    Node *getLink() { return link; }
};
