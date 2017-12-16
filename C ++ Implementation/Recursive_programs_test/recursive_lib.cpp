#include <recursive_lib.h>

int RecursiveUtility::factorial(int n){

   // Recursive base case
   if(n==0)
      return 0;
   if(n==1)
      return 1;

   //Recursive call
   return n*factorial(n-1);
}

