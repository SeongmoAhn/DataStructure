// hash.cpp
#include "HashMap.h"

int main() {
    HashMap map;

    map.addLinearProb("do", "반복");
    map.addLinearProb("for", "반복");
    map.addLinearProb("if", "분기");
    map.addLinearProb("case", "분기");
    map.addLinearProb("else", "분기");
    map.addLinearProb("return", "반환");
    map.addLinearProb("function", "함수");
    map.display();

    map.searchLinearProb("return");
    map.searchLinearProb("class");
    map.searchLinearProb("function");

    return 0;
}
