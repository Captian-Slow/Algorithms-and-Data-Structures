#include<iostream>
#include<conio.h>
#define MAX_ROW 50
#define MAX_COLUMN 50
#define MAX_GROUPS 200

using namespace std;
int referenceMatrix[MAX_ROW][MAX_COLUMN];
int matrix[MAX_ROW][MAX_COLUMN];
int groupCount[MAX_GROUPS];
int numGroups = 0;

void checkAdjacentCells(int m, int n);
void resetReferenceMatrix(int m, int n);

int main(int argc, char *argv[]){

   int m, n, ans;

   cout<<"Enter the row count: ";
   cin>>m;
   cout<<"Enter the column count: ";
   cin>>n;

   cout<<"Enter the Matrix: ";
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         cout<<"\n";
         cin>>matrix[i][j];
      }
   }
   
   // Creating the reference matrix.
   resetReferenceMatrix(m ,n);

   // Traversing through the matrix
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){

         if(matrix[i][j] == 1 && referenceMatrix[i][j] != 1){  // Checking if cell is one and has not already been evaluated in a group.
            //We have found a group.         
            checkAdjacentCells(i, j);
            numGroups++;
         }
      }
   }

   //Finding the maximum among the groups.
   ans = groupCount[0];
   for(int i = 1; i < numGroups; i++){
      if(ans < groupCount[i])
         ans = groupCount[i];
   }

   cout<<"The answer is: "<<ans;
   getch();
}

void checkAdjacentCells(int m, int n){

   referenceMatrix[m][n] = 1; //Marking that this cell has been noted in the calculation of a group.
   // For loop to check all the adjacent cells
   for(int i = m-1; i <= m+1; i++){
      for(int j = n-1; j <= n+1; j++){
         
         if(i == m && j == n)  //Skipping the cell being checked itself
            continue;
         if(i < 0 || j < 0 || i == m+2 || j == n+2)
            continue;
         if(referenceMatrix[i][j] == 1)   // Checking if the cell has already been visited.
            continue;
         if(matrix[i][j] == 1){
            checkAdjacentCells(i, j);
         }
      }
   }

   // All cells have been checked.
   groupCount[numGroups]++;

}


// Resets all the values in the matrix to zero.
void resetReferenceMatrix(int m , int n){

   for (int i = 0; i < m; ++i) {   // for each row
      for (int j = 0; j < n; ++j) { // for each column
         referenceMatrix[i][j] = 0;
      }
   }
}