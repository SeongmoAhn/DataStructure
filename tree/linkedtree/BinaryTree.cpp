// BinaryTree.cpp
#include "BinaryTree.h"

int main() {
    BinaryTree tree;

    BinaryNode *G = new BinaryNode(7, NULL, NULL);
    BinaryNode *F = new BinaryNode(6, NULL, NULL);
    BinaryNode *E = new BinaryNode(5, NULL, NULL);
    BinaryNode *D = new BinaryNode(4, NULL, NULL);
    BinaryNode *C = new BinaryNode(3, F, G);
    BinaryNode *B = new BinaryNode(2, D, E);
    BinaryNode *A = new BinaryNode(1, B, C);

    tree.setRoot(A);

    tree.display();

    return 0;
}
