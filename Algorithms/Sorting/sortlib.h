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



// Function intended to be used in this header file only.
// Merges the divided array.
static void merge(int *data, int m, int l, int r) {

    int n1 = m - l + 1;
    int n2 = r - m;
    int A1[n1], A2[n2];

    int i;
    for (i = 0; i < n1; i++)
        A1[i] = data[l + i];

    for (i = 0; i < n2; i++)        
        A1[i] = data[m + 1 + i];

    i = 0;      //Index of the first array
    int j = 0;  //Index of the second array
    int k = l;  //Index of the original array

    while (i<n1 && j<n2) {

        if(A1[i] <= A2[j]) {
            data[k++] = A1[i++];
        }
        else {
            data[k++] = A2[j++];
        }
    }

    //Adding the remaining elements
    while (i<n1) {
        data[k++] = A1[i++];
    }
    while (j<n2) {
        data[k++] = A2[j++];
    }
}

// Recursively calls, and then merges.
static void merge_driver(int *data, int l, int r) {
    
    // Base condition for recursive implementation.
    if(l > r) {
        
        int mid = l + (r - l)/2;    // This method prevents overflow in some cases.
        merge_driver(data, l, mid);
        merge_driver(data, mid + 1, r);
        merge(data, mid, l, r);
    }
}

void merge_sort(int *data, int length) {

    merge_driver(data, 0, length - 1);
}

#define merge_driver() Not_intended_for_use_outside_header
#define merge() Not_intended_for_use_outside_header


