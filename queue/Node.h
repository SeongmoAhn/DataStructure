// Node.h 연결 리스트를 이용한 스택을 위한 노드 클래스
#include "../Student.h"

class Node : public Student {
    Node *link;

public:
    Node(int id, string name, string dept)
        : Student(id, name, dept) { link = NULL; } // 생성자 초기화 리스트

    Node* getLink() { return link; }
    void setLink(Node *p) { link = p; }
};
