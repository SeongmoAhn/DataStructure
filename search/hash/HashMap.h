// HashMap.h
#include "Record.h"
#include "hashFunc.h"

class HashMap {
    Record table[TABLE_SIZE];

public:
    HashMap() { reset(); }
    void reset() {
        for (int i = 0; i < TABLE_SIZE; i++)
            table[i].reset();
    }

    void display() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << '[';
            cout.width(2);
            cout << i;
            cout << ']';
            table[i].display();
        }
        cout << endl;
    }

    void addLinearProb(string key, string value) {
        int i, hashValue;
        hashValue = i = hashFunction(key);

        while (table[i].isEmpty() == false) {
            if (table[i].equal(key)) {
                cout << '[' << key << "] KEY is overlaped" << endl;
                return ;
            }
            i = (i + 1) % TABLE_SIZE;
            if (i == hashValue) {
                cout << '[' << key << "] Hash Table is full" << endl;
                return ;
            }
        }
        table[i].set(key, value);
    }

    Record *searchLinearProb(string key) {
        int i, hashValue;
        hashValue = i = hashFunction(key);

        while (table[i].isEmpty() == false) {
            if (table[i].equal(key)) {
                cout << '[' << key << "] Search Succeed [" << i << ']' << endl;
                table[i].display(); cout << endl;
                return table + i;
            }
            i = (i + 1) % TABLE_SIZE;
            if (i == hashValue) break;
        }

        cout << '[' << key << "] Search failed" << endl << endl;
        return NULL;
    }
};
