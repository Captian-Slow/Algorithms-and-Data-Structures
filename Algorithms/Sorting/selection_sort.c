#include <stdio.h>
#include <sortlib.h>

void main() {

   int data[50], n, i, j;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   printf("Enter the data: ");
   for(i = 0; i < n; i++){
      scanf("%d", &data[i]);
      // for(j = 0; j < n; j++){
      //    printf("\n%d", data[j]);
      // }
   }
   selection_sort(data, n);
   for(i = 0; i < n; i++){
      printf("\n%d", data[i]);
   }
}