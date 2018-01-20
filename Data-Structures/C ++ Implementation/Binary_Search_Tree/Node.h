#ifndef NODE_H
#define NODE_H


class Node
{



public:
    Node(int data = -1, Node *leftNode = nullptr, Node *rightNode = nullptr);
    int data;
    Node *leftNode;
    Node *rightNode;

};



#endif // NODE_H
