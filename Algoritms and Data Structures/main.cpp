#include<iostream>
#include"linkedList.h"

int main()
{
    linkedList list;
    list.insertLink(1);
    list.insertLink(2);
    list.insertLink(3);
    list.insertLink(4);
    list.insertLink(5);
    list.removeLinkAt(3);

    list.displayList();
    return 0;
}

