#include <stdio.h>

void swap_i_array(int *data, int one, int two) {

   int temp = data[one];
   data[one] = data[two];
   data[two] = temp;
}

int min_i_array(int *data, int length) {

   //Returns the index of the minimum element.

   if(length == 1) {
      return data[0];
   }
   int min = 0, i = 0;
   for(i = 0; i < length; i++) {
      if(data[i+1] < data[min]) {
         min = i+1;
      }
   }
   return min;
}

int min_i_array_start_index(int *data, int length, int start_index) {

   //This function is needed due to the absence of default function parameters in C.
   if(length == 1) {
      return data[0];
   }
   int min = start_index, i = start_index;
   for(i = start_index; i < length; i++) {
      if(data[i+1] < data[min]) {
         min = i+1;
      }
   }
   return min;
} 

void bubbleSort(int *data, int length) {

   int i, j, swapped = 1;
   for(i = 0; i < length - 1 && swapped; i++){
      swapped = 0;
      for(j = 0; j < length - i - 1; j++){
         if(data[j] > data[j+1]){
            swap_i_array(data, j, j+1);       
            swapped = 1;     
         }         
      }
   }
}

void selection_sort(int *data, int length) {

   int i = 0, j;
   for(i = 0; i < length - 1; i++) {
        swap_i_array(data, i, min_i_array_start_index(data, length, i));
        printf("\n");
        for(j = 0; j < length; j++){
            printf(" %d", data[j]);
        }       
   }
}

void insertion_sort(int *data, int length) {

    if (length == 1) {
        return;
    }

    int i, j, num;

    for(i = 1; i < length; i++) {        
        num = data[i];
        j = i;
        while (j >= 1) {
            if(data[j-1] > num) {
                swap_i_array(data, j, j-1);
            }        
            j--;
        }
    }
}

void shell_sort(int *data, int length) {

    if(length == 1) {
        return;
    }

    int gap, i, j, temp;
    for(gap = length/2; gap>0; gap /= 2) {
        for(i = gap; i < length; i++) {
            
            temp = data[i];
            for(j=i; j >= gap && data[j - gap] > temp; j -= gap) {
                data[j] = data[j-gap];
            }
            data[j] = temp;            
        }
    }
}
