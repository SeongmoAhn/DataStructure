// BinaryNode.h
#include <iostream>

class BinaryNode {
protected:
    int data;
    BinaryNode *left;
    BinaryNode *right;

public:
    BinaryNode(int data = 0, BinaryNode *left = NULL, BinaryNode *right = NULL)
        : data(data), left(left), right(right) {}

    void setData(int data) { this->data = data; }
    void setLeft(BinaryNode *left) { this->left = left; }
    void setRight(BinaryNode *right) { this->right = right; }

    int getData() { return data; }
    BinaryNode *getLeft() { return left; }
    BinaryNode *getRight() { return right; }

    bool isLeaf() { return (left == NULL) && (right == NULL); }
};
