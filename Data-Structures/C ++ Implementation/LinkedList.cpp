#include "linkedList.h"
#include<iostream>

using namespace std;

linkedList::linkedList()
{

    head = nullptr;
    next = nullptr;
    temp = nullptr;
}

void linkedList::insertLink(int data)
{
    next = new node;

    if(head == nullptr)
    {
        head = next;
        temp = next;

        next ->data = data;
        next ->link = nullptr;
        cout<<"\nData item: "<<data<<" added successfully !";

        return;
    }

    temp ->link = next;
    next ->data = data;
    temp = next;
    next ->link = nullptr;

    cout<<"\nData item: "<<data<<" added successfully !";

}

void linkedList::displayList()
{
    node *iterate = head;
    cout<<endl;
    while(iterate != nullptr)
    {
        cout<<iterate ->data<<" -> ";
        iterate = iterate ->link;
    }
}

void linkedList::removeLinkFront()
{
    if(head == nullptr)
    {
        cout<<"List is empty !";
        return;
    }

    if(head == next)
    {
        delete head;
        head = nullptr;
        next = nullptr;
        temp = nullptr;
        return;
    }

    node *temporary = head;
    head = temporary ->link;
    delete temporary;

}

void linkedList::removeLinkAt(int position)
{
    if(position == 1)
    {
        removeLinkFront();
        return;
    }

    node *temporary;
    temporary = head;

    for(int i = 1; i < position - 1; i++)   //temporary holds the position of the node before the node to be deleted
    {
        temporary = temporary ->link;
    }

    if((temporary ->link) ->link == nullptr)  //To check if it is the last node
    {
        next = temporary;
        temp = temporary;
        temporary ->link = nullptr;
        delete temporary ->link;
        return;
    }

    delete temporary ->link; //Deleting the node from memory

    temporary ->link = (temporary ->link) ->link;  //De-Linking the node at position and linking the next node.

}