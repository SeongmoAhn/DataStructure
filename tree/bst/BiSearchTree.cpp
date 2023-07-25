// BiSearchTree.cpp
#include "BiSearchTree.h"

int main() {
    BiSearchTree tree;

    BinaryNode *G = new BinaryNode(27, NULL, NULL);
    BinaryNode *F = new BinaryNode(31, G, NULL);
    BinaryNode *E = new BinaryNode(12, NULL, NULL);
    BinaryNode *D = new BinaryNode(3, NULL, NULL);
    BinaryNode *C = new BinaryNode(26, NULL, F);
    BinaryNode *B = new BinaryNode(7, D, E);
    BinaryNode *A = new BinaryNode(18, B, C);
    tree.setRoot(A);

    tree.search(12);
    tree.search(100);
    cout << endl;

    tree.search(9);

    BinaryNode *H = new BinaryNode(9, NULL, NULL);
    tree.insert(H);

    tree.search(9);

    return 0;
}

/*
실행 결과 :
key 값이 12인 노드 탐색 성공
key 값이 100인 노드 탐색 실패
key 값이 9인 노드 탐색 실패
key 값이 9인 노드 탐색 성공
*/
