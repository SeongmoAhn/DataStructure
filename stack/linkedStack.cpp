// linkedStack.cpp
#include "linkedStack.h"

int main() {
    LinkedStack stack;
    stack.push(new Node(20230001, "안성모", "컴퓨터학부"));
    stack.push(new Node(20230002, "이세상", "경제학과"));
    stack.push(new Node(20230003, "이윤성", "소프트웨어학과"));
    stack.display();

    return 0;
}
