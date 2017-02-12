#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node
    {
        int data;
        node *link;
    };


class linkedList
{
    protected:
        node *head;
        node *next;
        node *temp;

    public:
        linkedList();
        void insertLink(int data);
        void removeLinkFront();
        void removeLinkAt(int position);
        void displayList();


};

#endif // LINKEDLIST_H