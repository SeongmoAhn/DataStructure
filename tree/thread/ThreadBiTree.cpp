// ThreadBiTree.cpp
#include "ThreadBiTree.h"

int main() {
    ThreadBiTree tree;

    ThreadBiNode *A = new ThreadBiNode('A', NULL, NULL, true);
    ThreadBiNode *B = new ThreadBiNode('B', NULL, NULL, true);
    ThreadBiNode *C = new ThreadBiNode('C', A, B, false);
    ThreadBiNode *D = new ThreadBiNode('D', NULL, NULL, true);
    ThreadBiNode *E = new ThreadBiNode('E', NULL, NULL, false);
    ThreadBiNode *F = new ThreadBiNode('F', D, E, false);
    ThreadBiNode *G = new ThreadBiNode('G', C, F, false);
    A->setRight(C);
    B->setRight(G);
    D->setRight(F);

    tree.setRoot(G);

    tree.threadInorder();

    return 0;
}

/*
실행 결과 :
Thread Binary Tree : [A] [C] [B] [G] [D] [F] [E]
*/
