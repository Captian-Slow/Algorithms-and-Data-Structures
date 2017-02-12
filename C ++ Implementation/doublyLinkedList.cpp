#include "doublyLinkedList.h"
#include<iostream>

using namespace std;

void doublyLinkedList::insertEmpty(int data)  //To insert when list is empty
{
    newNode = new doubleNode;
    head = newNode;
    tempNode = newNode;
    tail = newNode;

    newNode ->frontLink = nullptr;
    newNode ->backLink = nullptr;
    newNode ->data = data;
}

doublyLinkedList::doublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
    
}

void doublyLinkedList::insertLast(int data)
{
    if(head == nullptr)
    {
        insertEmpty(data);
        return;
    }

    newNode = new doubleNode;
    //cout<<"HI";
    tempNode ->frontLink = newNode;
    tempNode = newNode;
    tail = newNode;

}

void doublyLinkedList::displayList()
{
    doubleNode *temporary;
    temporary = head;
    do
    {
        if(temporary == tail)
        {
            cout<<temporary ->data<<" -> ";
            return;
        }

        cout<<temporary ->data<<" -> ";
        temporary = temporary ->frontLink; 
    }while(temporary != tail);
}

