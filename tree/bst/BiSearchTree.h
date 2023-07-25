// BiSearchTree.h
#include "BinaryTree.h"

class BiSearchTree : public BinaryTree {
public:
    BiSearchTree() {}
    ~BiSearchTree() {}

    BinaryNode *search(int key) {
        // return searchRecur(root, key);
        return searchIter(root, key);
    }
    // 재귀로 구현
    BinaryNode *searchRecur(BinaryNode *node, int key) {
        if (node == NULL) return NULL;
        
        if (key == node->getData()) return node;
        else if (key < node->getData()) return searchRecur(node->getLeft(), key);
        else return searchRecur(node->getRight(), key);
    }

    // 반복으로 구현
    BinaryNode *searchIter(BinaryNode *node, int key) {
        while (node != NULL) {
            if (key == node->getData()) return node;
            else if (key < node->getData()) node = node->getLeft();
            else node = node->getRight();
        }
        return NULL;
    }
    
    // void insert(BinaryNode *node) {}
    // void insert(BinaryNode *rootNode, BinaryNode *node) {}
   
    // void remove(int data) {}
    // void remove(BinaryNode *parent, BinaryNode *node) {}
};
