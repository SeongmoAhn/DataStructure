// ThreadBiTree.h
#include "ThreadBiNode.h"
using namespace std;

class ThreadBiTree {
    ThreadBiNode *root;
    
public:
    ThreadBiTree() : root(NULL) {}

    bool isEmpty() { return (root == NULL); }

    void setRoot(ThreadBiNode *root) { this->root = root; }

    ThreadBiNode *findSuccessor(ThreadBiNode *node) {
        ThreadBiNode *retNode = node->getRight();

        if (retNode == NULL || node->bThread) return retNode;

        else {
            while (retNode->getLeft() != NULL) retNode = retNode->getLeft();
            return retNode;
        }
    }
    void threadInorder() {
        if (!isEmpty()) {
            cout << "Thread Binary Tree : ";

            ThreadBiNode *curNode = root;
            while (curNode->getLeft()) curNode = curNode->getLeft();

            do {
                cout << "[" << curNode->getData() << "] ";
                curNode = findSuccessor(curNode);
            } while (curNode);

            cout << endl;
        }
    }
};
