#include"BST.h"
#include<iostream>
#include"Node.h"
#include<math.h>

//g++ -std=c++0x -o BST main.cpp BST.cpp Node.cpp

using namespace::std;

BST::BST()
{
    root = nullptr;
    lineCount = 0;
}


void BST::Insert(int data)
{

    Node *currentNode;
    Node *parentNode;
    Node * tempNode = new Node(data, nullptr, nullptr);

    if(root == nullptr)
    {
        root = tempNode;
        root->data = data;
        cout<<"\nCreating root with data "<<tempNode->data;
        return;
    }

    currentNode = root;
    parentNode = nullptr;

    while(true)
    {
        parentNode = currentNode;

        if(data < currentNode ->data)
        {

            currentNode = currentNode ->leftNode;

            if(currentNode == nullptr)
            {
                parentNode ->leftNode = tempNode;
                cout<<"\nCreating left with data "<<tempNode->data;
                lineCount++;
                return;
            }


        }

        else
        {

            currentNode = currentNode ->rightNode;

            if(currentNode == nullptr)
            {
                parentNode ->rightNode = tempNode;
                lineCount++;
                cout<<"\nCreating right with data "<<tempNode->data;
                return;
            }

        }
    }



    delete currentNode;
    delete parentNode;
    delete tempNode;
}

/*
void BST::displayBST()
{
    if(root == nullptr)
        return;

    if(lineCount == 1)
    {

        cout<<"\t"<<root->data;
    }


    //int tabCount = 0;

    newLineCount = floor(log2(lineCount));

    cout<<"\n";

    printBST(root);

}

void BST::printBST(Node *node)
{

    if(node == root)
    {

        for(int i = 0; i< newLineCount; i++)
            cout<<"\t";

        cout<<node->data;
        newLineCount--;

        cout<<"\n";
    }

    if(node->leftNode == nullptr)
    {

        for(int i =0; i< newLineCount; i++)
        {

            cout<<"\t\n";

        }
        cout<<node->leftNode->data;
        newLineCount--;
    }
    else
        printBST(node->leftNode);

    if(node->rightNode == nullptr)
    {
        cout<<"\t\t";
        cout<<node->rightNode;
    }

    else
        printBST(node->rightNode);
}

*/

void BST::inTransversal()
{

}

void BST::postTransversal()
{

}

void BST::preTransversal()
{

}


Node* BST::Search(int data)
{

    Node *current;
    Node *parent = nullptr;

    current = root;
    while(true)
    {

        parent = current;

        if(current->data = data)
            return current;

        if(current->data < data)
        {

            current = parent->leftNode;

        }

        else
        {
            current = parent->rightNode;
        }

        if(current == nullptr)
            return nullptr;
    }

}

Node* BST::findNode(Node *node, int data)
{
    cout<<"inside !!";

    if(node->leftNode != nullptr)
        if(node->leftNode->data == data)
            return node ->leftNode;

    if(node->rightNode != nullptr)
        if(node->rightNode->data == data)
            return node->rightNode;

    findNode(node->leftNode, data);
    findNode(node->rightNode, data);

}


