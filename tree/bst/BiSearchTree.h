// BiSearchTree.h
#include "BinaryTree.h"

class BiSearchTree : public BinaryTree {
public:
    BiSearchTree() {}
    ~BiSearchTree() {}

    BinaryNode *search(int key) {
        BinaryNode *retNode = searchRecur(root, key);
        // BinaryNode *retNode = searchIter(root, key);

        if (retNode != NULL) cout << "key 값이 " << key << "인 노드 탐색 성공" << endl;
        else cout << "key 값이 " << key << "인 노드 탐색 실패" << endl;

        return retNode;
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
    
    void insert(BinaryNode *newNode) {
        if (isEmpty()) root = newNode;
        else insert(root, newNode);
    }
    void insert(BinaryNode *rootNode, BinaryNode *newNode) {
        if (newNode->getData() == rootNode->getData()) return ;
        else if (newNode->getData() < rootNode->getData()) {
            if (rootNode->getLeft() == NULL) rootNode->setLeft(newNode);
            else insert(rootNode->getLeft(), newNode);
        }
        else {
            if (rootNode->getRight() == NULL) rootNode->setRight(newNode);
            else insert(rootNode->getRight(), newNode);
        }
    }
   
    void remove(int key) {
        if (isEmpty()) return ;

        BinaryNode *parent = NULL;
        BinaryNode *node = root;

        while (node != NULL && node->getData() != key) {
            parent = node;
            node = (key < node->getData() ? node->getLeft() : node->getRight());
        }

        if (node == NULL) {
            cout << "Error : key 값을 갖는 노드가 트리에 없음" << endl;
            return ;
        }
        else remove(parent, node);
    }
    void remove(BinaryNode *parent, BinaryNode *node) {
        if (node->isLeaf()) {
            if (parent == NULL) root = NULL;
            else {
                if (parent->getLeft() == node)
                    parent->setLeft(NULL);
                else parent->setRight(NULL);
            }
        }
        else if (node->getLeft() == NULL || node->getRight() == NULL) {
            BinaryNode *child = 
                (node->getLeft() != NULL ? node->getLeft() : node->getRight());

            if (node == root) root = child;
            else {
                if (parent->getLeft() == node)
                    parent->setLeft(child);
                else parent->setRight(child);
            }
        }
        else {
            BinaryNode *reParent = node;
            BinaryNode *replace = node->getRight();
            while (replace->getLeft() != NULL) {
                reParent = replace;
                replace = replace->getLeft();
            }

            if (reParent->getLeft() == replace)
                reParent->setLeft(replace->getRight());
            else reParent->setRight(replace->getRight());

            node->setData(replace->getData());

            node = replace;
        }

        delete node;
    }
};
