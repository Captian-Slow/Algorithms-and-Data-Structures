#include<iostream>
#include<conio.h>
#include<recursive_lib.h>
#define SOURCE "Source Tower"
#define AUX "Aux Tower"
#define DEST "Destination Tower"

using namespace std;

int main(int argc, char *argv[]){

   int num_rings;

   cout<<"Enter the number of rings: ";
   cin>>num_rings;
   cout<<"Instructions to solve this problem are as follows: \n";
   TowerOfHanoi::printTowerInstructions(num_rings, SOURCE, DEST, AUX);
   getch();
   
}