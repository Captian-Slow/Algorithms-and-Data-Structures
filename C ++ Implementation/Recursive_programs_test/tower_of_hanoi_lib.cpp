#include<tower_of_hanoi_lib.h>
#include<iostream>

using namespace std;

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

