#ifndef BST_H
#define BST_H

#include"Node.h"

class BST
{

public:

    BST();
    void Insert(int);
    Node* Search(int);
    void preTransversal();
    void inTransversal();
    void postTransversal();
    void displayBST();

private:

    Node *root;
    int lineCount;
    int newLineCount = 0;
    void printBST(Node *node); //Helper function for displayBST();
    Node* findNode(Node *node, int data); //Recursively called Helper function for Search();


};


#endif // BST_H
