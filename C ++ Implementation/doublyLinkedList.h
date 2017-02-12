#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

struct doubleNode
{
    int data;
    doubleNode *frontLink;
    doubleNode *backLink;
};

class doublyLinkedList
{
    doubleNode *head;
    doubleNode *tail;
    doubleNode *tempNode;
    doubleNode *newNode;

    private:
    

    public:
        doublyLinkedList();
        void insertEmpty(int data);
        void insertFirst(int data);
        void insertLast(int data);
        void displayList();
        void deleteAt(int position);
        
        
};

#endif // DOUBLYLINKEDLIST_H
