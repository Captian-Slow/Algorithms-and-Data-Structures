#include"Node.h"
#include<iostream>

Node::Node(int data, Node *leftNode, Node *rightNode)
{

    this->data = data;
    this->leftNode = leftNode;
    this->rightNode = rightNode;
}


