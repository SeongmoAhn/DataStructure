// BinaryTree.h
#include "BinaryNode.h"

class BinaryTree {
    BinaryNode *root;

public:
    BinaryTree() : root(NULL) {}

    void setRoot(BinaryNode *node) { root = node; }
    BinaryNode *getRoot() { return root; }

    bool isEmpty() { return (root == NULL); }

    // void preorder() {...}
    // void inorder() {...}
    // void postorder() {...}
    // void levelorder() {...}
    // void display() {
    //     preorder();
    //     inorder();
    //     postorder();
    //     levelorder();
    // }

    // int getCount() {...}
    // int getHeight() {...}
    // int getLeafCount() {...}
};
