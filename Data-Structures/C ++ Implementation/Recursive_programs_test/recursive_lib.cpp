#include<recursive_lib.h>
#include<iostream>

using namespace std;
char permutations[50];

int PermutationsNum::printAllPermutationsNum(int digitCount){

   // Base condition
   if(digitCount < 1){
      cout<<permutations<<"\n";
   }
   else{
      
      for(int i=65; i<=90; i++){
         permutations[digitCount-1] = i;
         PermutationsNum::printAllPermutationsNum(digitCount-1);      
      }
      
      /* Testing ....Ignore.....
      permutations[digitCount-1] = 65;
      PermutationsNum::printAllPermutationsNum(digitCount-1);    
      permutations[digitCount-1] = 66;
      PermutationsNum::printAllPermutationsNum(digitCount-1);    
      */
   }
}

void TowerOfHanoi::printTowerInstructions(int n, std::string fromTowerName, std::string toTowerName, std::string auxTowerName){

   //Base case condition.
   if(n==1){
      cout<<"Move a ring from "<<fromTowerName<<" to "<<toTowerName<<"\n";
      return;
   }

   //Moving N-1 rings from the source to the auxilary tower.
   TowerOfHanoi::printTowerInstructions(n-1, fromTowerName, auxTowerName, toTowerName);
   //Move the last largest ring in the first tower to the 'to'/destination tower.
   TowerOfHanoi::printTowerInstructions(1, fromTowerName, toTowerName, auxTowerName);
   //Move all the remaining N-1 towers that had been moved to the auxillary tower to the destination tower.
   TowerOfHanoi::printTowerInstructions(n-1, auxTowerName, toTowerName, fromTowerName);

}

int RecursiveUtility::factorial(int n){

   // Recursive base case
   if(n==0)
      return 0;
   if(n==1)
      return 1;

   //Recursive call
   return n*factorial(n-1);
}

