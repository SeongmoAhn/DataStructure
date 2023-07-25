// ThreadBiNode.h
#include <iostream>

class ThreadBiNode {
    char nodeName;
    ThreadBiNode *left;
    ThreadBiNode *right;

public:
    bool bThread;

    ThreadBiNode(int nodeName, ThreadBiNode *left, ThreadBiNode *right, bool bThread)
        : nodeName(nodeName), left(left), right(right), bThread(bThread) {}

    char getData() { return nodeName; }
    ThreadBiNode *getLeft() { return left; }
    ThreadBiNode *getRight() { return right; }

    void setRight(ThreadBiNode *right) { this->right = right; }
};
