#include"BST.h"
#include<iostream>

using namespace::std;

int main()
{

    BST bst;
    bst.Insert(7);
    bst.Insert(9);
    bst.Insert(8);
    bst.Insert(2);
    bst.Insert(1);
    bst.Insert(3);


    cout<<"\n"<<bst.Search(8)->data;
    cout<<"\n"<<bst.Search(7)->data;
    cout<<"\n"<<bst.Search(1)->data;

}
