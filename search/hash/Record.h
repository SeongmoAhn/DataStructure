// Record.h
#include <iostream>
#include <string>
using namespace std;

class Record {
    string key;
    string value;

public:
    Record(string k = "", string v = "") { set(k, v); }

    void set(string k, string v) {
        key = k;
        value = v;
    }
    void reset() { set("", ""); }
    bool isEmpty() { return key[0] == '\0'; }
    bool equal(string k) { return k == key; }
    void display() { cout << key << " : " << value << endl; }
};
