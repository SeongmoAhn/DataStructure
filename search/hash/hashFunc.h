// hashFunc.h
#include <string>
#define TABLE_SIZE 13
using namespace std;

inline int transform(string key) {
    int number = 0;
    for (int i = 0; i < key.length(); i++) number += key[i];

    return number;
}

inline int hashFunction(string key) {
    return transform(key ) % TABLE_SIZE;
}
