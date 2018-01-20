#include<iostream>
#include<recursive_lib.h>
#include<conio.h>

using namespace std;

int main(int argc, char *argv[]){

   int numberOfDigits;
   cout<<"Enter the number of digits for the permutations: ";
   cin>>numberOfDigits;
   cout<<"\n\nThe Permutations are: \n\n";
   PermutationsNum::printAllPermutationsNum(numberOfDigits);   
   getch();
}