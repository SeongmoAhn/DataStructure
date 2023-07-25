// BiSearchTree.cpp
#include "BiSearchTree.h"

int main() {
    BiSearchTree tree;

    BinaryNode *A = new BinaryNode(35, NULL, NULL);
    tree.setRoot(A);
    tree.insert(new BinaryNode(18, NULL, NULL));
    tree.insert(new BinaryNode(68, NULL, NULL));
    tree.insert(new BinaryNode(7, NULL, NULL));
    tree.insert(new BinaryNode(26, NULL, NULL));
    tree.insert(new BinaryNode(99, NULL, NULL));
    tree.insert(new BinaryNode(3, NULL, NULL));
    tree.insert(new BinaryNode(12, NULL, NULL));
    tree.insert(new BinaryNode(22, NULL, NULL));
    tree.insert(new BinaryNode(30, NULL, NULL));

    tree.display(); cout << endl;
    tree.remove(18);
    tree.display();

    return 0;
}

/*
실행 결과 :
preorder   : [35] [18] [7] [3] [12] [26] [22] [30] [68] [99]
inorder    : [3] [7] [12] [18] [22] [26] [30] [35] [68] [99]
postorder  : [3] [12] [7] [22] [30] [26] [18] [99] [68] [35]

preorder   : [35] [22] [7] [3] [12] [26] [30] [68] [99]
inorder    : [3] [7] [12] [22] [26] [30] [35] [68] [99]
postorder  : [3] [12] [7] [30] [26] [22] [99] [68] [35]
*/
