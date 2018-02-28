#include <stdio.h>
#include <sortlib.h>

void main() {

   int data[5000], n, i, j;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   printf("The generated random numbers are: ");
   for(i = 0; i < n; i++){
      data[i]  = rand();
      printf("%d\n", data[i]);
      // for(j = 0; j < n; j++){
      //    printf("\n%d", data[j]);
      // }
   }
   quick_sort(data, 0, n - 1);
   for(i = 0; i < n; i++){
      printf("\n%d", data[i]);
   }
}