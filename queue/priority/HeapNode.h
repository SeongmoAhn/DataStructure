// HeapNode.h
#include <iostream>
using namespace std;

class HeapNode {
    int key;
    
public:
    HeapNode(int key = 0) : key(key) {}

    void setKey(int key) { this->key = key; }
    int getKey() { return key; }

    void display() { cout << "[" << key << "]"; }
};
