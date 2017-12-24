#include<iostream>
#include <conio.h>

using namespace std;

struct Node {

    int data;
    Node *next;
};

Node *head = nullptr;

void addToListEnd(int data){

    Node *temp = new Node;
    temp->data = data;
    temp->next = nullptr;

    if(head == nullptr){
        head = temp;
        return;
    }
    Node *curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = temp;
}

bool checkForLoop(Node *head){

    if(head == nullptr){
        cout << "Error checking for loops, the list is empty.";
        return false;
    }
    Node *s_ptr = head, *f_ptr = head;
    int slowStep = 1, fastStep = 2;

    while(true){

        for(int i = 0; i < slowStep; i++){

            if(s_ptr->next == nullptr)
                return false;
            s_ptr = s_ptr->next;
        }
        for(int i = 0; i < fastStep; i++){
            if(f_ptr->next == nullptr){

                return false;
            }
            f_ptr = f_ptr->next;
        }

        if(s_ptr == f_ptr){
            return 1;
        }
    }

    return true;
}

int main(int argc, char *argv[]){

    addToListEnd(5);
    addToListEnd(15);
    addToListEnd(25);
    addToListEnd(35);
    //cout << (head->next == nullptr);
    // Creating a loop
    //head->next->next->next = head->next;
    cout<<"It is " << checkForLoop(head) << " that the list contains a loop";
    getch();
}
