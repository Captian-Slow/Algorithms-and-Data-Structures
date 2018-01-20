#include<iostream>

using namespace std;

int sum_int_arr(int arr[], int n);
void quickSort(int arr[], int left, int right);
int nth_largest(int arr[], int n);

int main(){
    int ox, oy; //Total orders taken by both finally
    int sum_ai, sum_bi, total_sum = 0;
    int n, *ai, *bi, x, y, t;

    cin>>t;
    for(int i = 0; i < t; i++){

        total_sum = 0;
        cin>>n>>x>>y;
        ai = new int[n];
        bi = new int[n];
        for(int j = 0; j < n; j++){
            cin>>ai[j];
        }
        for(int j = 0; j < n; j++){
            cin>>bi[j];
        }
        ox = x;
        oy = y;
        quickSort(ai, 0, n - 1);
        quickSort(bi, 0, n - 1);
        if((x+y) > n){  //Distributing orders among x and y
            sum_ai = sum_int_arr(ai, n);
            sum_bi = sum_int_arr(bi, n);
            if(sum_ai >= sum_bi){
                ox = x;
                oy = n - ox;    //Remaining go to y
            }
            else{
                oy = y;
                ox = n -oy;
            }
        }
        //cout<<ox<<" "<<oy;
        for(int j = 0; j < ox; j++){
            total_sum += ai[n - 1 - j];
            //cout<<"\nTSx:"<<total_sum;
        }
        for(int j = 0; j < oy; j++){
            total_sum += bi[n - 1 - j];
            //cout<<"\nTSy:"<<total_sum;
        }

        cout<<total_sum<<"\n";
    }

}

/*
int main(){

    int arr[6];
    for(int i = 0; i < 6; i++){
        cin>>arr[i];
    }
    cout<<"nth largest: "<<nth_largest(arr, 1);
}
*/

int sum_int_arr(int arr[], int n){

    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      }

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

