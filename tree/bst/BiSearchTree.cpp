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

    BinaryNode *keyNode = tree.search(12);
    if (keyNode == NULL) cout << "key 12 value absence" << endl;
    else cout << keyNode->getData() << " is detected"<< endl;

    keyNode = tree.search(100);
    if (keyNode == NULL) cout << "key 100 value absence" << endl;
    else cout << keyNode->getData() << " is detected"<< endl;

    return 0;
}

/*
실행 결과 :
12 is detected
key 100 value absence
*/
