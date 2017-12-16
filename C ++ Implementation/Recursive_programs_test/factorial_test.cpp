#include<iostream>
#include<recursive_lib.h>
#include<conio.h>

using namespace std;

int main(int argv, char *argc[]){

   int num;
   cout<<"Enter the number: ";
   cin>>num;
   cout<<"The recursive factorial is: "<<RecursiveUtility::factorial(num);
   getch();
}

