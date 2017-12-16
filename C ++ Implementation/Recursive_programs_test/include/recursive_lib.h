#ifndef RECURSIVE_LIB_H
#define RECURSIVE_LIB_H

#include<string>
#define MAX_DIGITS 50

class PermutationsNum{

   public:
    static int printAllPermutationsNum(int digitCount);
};

class TowerOfHanoi{

   public:
      static void printTowerInstructions(int n, std::string fromTowerName, std::string toTowerName, std::string auxTowerName);
   
};

class RecursiveUtility{

     public:
         static int factorial(int n);
};

#endif