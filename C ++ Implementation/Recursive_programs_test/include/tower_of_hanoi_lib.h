#ifndef TOWER_OF_HANOI_LIB_H
#define TOWER_OF_HANOI_LIB_H
#include<string>

class TowerOfHanoi{

   public:
      static void printTowerInstructions(int n, std::string fromTowerName, std::string toTowerName, std::string auxTowerName);
   
};

#endif