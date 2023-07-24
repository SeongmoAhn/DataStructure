// BinaryTree.h
#include "circularQueue.h"
#include <algorithm>
using namespace std;

class BinaryTree {
    BinaryNode *root;

public:
    BinaryTree() : root(NULL) {}

    void setRoot(BinaryNode *node) { root = node; }
    BinaryNode *getRoot() { return root; }

    bool isEmpty() { return (root == NULL); }

    void preorder() {
        cout << "preorder   : ";
        preorder(root);
        cout << endl;
    }
    void preorder(BinaryNode *node) {
        if (node == NULL) return ;

        cout << "[" << node->getData() << "] ";
        preorder(node->getLeft());
        preorder(node->getRight());
    }
    void inorder() {
        cout << "inorder    : ";
        inorder(root);
        cout << endl;
    }
    void inorder(BinaryNode *node) {
        if (node == NULL) return;

        inorder(node->getLeft());
        cout << "[" << node->getData() << "] ";
        inorder(node->getRight());
    }
    void postorder() {
        cout << "postorder  : ";
        postorder(root);
        cout << endl;
    }
    void postorder(BinaryNode *node) {
        if (node == NULL) return;

        postorder(node->getLeft());
        postorder(node->getRight());
        cout << "[" << node->getData() << "] ";
    }
    void levelorder() {
        CircularQueue queue;
        if (root == NULL) return;
        queue.enqueue(root);

        cout << "levelorder : ";

        while (!queue.isEmpty()) {
            BinaryNode *curNode = queue.dequeue();
            if (curNode == NULL) continue;

            cout << "[" << curNode->getData() << "] ";
            queue.enqueue(curNode->getLeft());
            queue.enqueue(curNode->getRight());
        }
        cout << endl;
    }
    void display() {
        preorder();
        inorder();
        postorder();
        levelorder();
    }

    int getCount() {
        return isEmpty() ? 0 : getCount(root);
    }
    int getCount(BinaryNode *node) {
        if (node == NULL) return 0;

        return 1 + getCount(node->getLeft()) + getCount(node->getRight());
    }

    int getLeafCount() {
        return isEmpty() ? 0 : getLeafCount(root);
    }
    int getLeafCount(BinaryNode *node) {
        if (node == NULL) return 0;

        if (node->isLeaf()) return 1;
        else return getLeafCount(node->getLeft()) + getLeafCount(node->getRight());
    }

    int getHeight() {
        return isEmpty() ? 0 : getHeight(root);
    }
    int getHeight(BinaryNode *node) {
        if (node == NULL) return 0;

        return 1 + max(getHeight(node->getLeft()), getHeight(node->getRight()));
    }
};
