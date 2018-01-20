#include<iostream>
#include<stdlib.h>
#include <vector>
#include<windows.h>

using namespace std;

void optimiszeIO();
int int_arr_length(int *arr);
bool check_for_abs_diff_1(int num);

int main(){

    int n, t, min_sub_length = 0, currSubStr = 0;
    bool inSubStr = false;
    int *a;
    int *subStrings;
    int v_i;
    int v_j;

    optimiszeIO();

    cin>>t;
    for(int i = 0; i < t; i++){
        min_sub_length = 0;
        inSubStr = false;
        cin>>n;
        a = new int[n];
        subStrings = new int[n/3];

        for(int i = 0; i < n/3; i++){
            subStrings[i] = 0;
        }
        for(int v_i = 0; v_i < n; v_i++){
            cin>>a[v_i];
        }

        for(int v_j = 1; v_j < n - 1; v_j++){

            if(v_j + 1 == n){
                break;
            }
            cout<<inSubStr<<"\n";
            if(!((a[v_j+1] - a[v_j])*(a[v_j] - a[v_j-1]) >= 0)){
                //cout<<"HIT";
                if(!inSubStr){
                    inSubStr = true;
                }
                subStrings[currSubStr]++;
            }

            if(inSubStr && !((a[v_j+1] - a[v_j])*(a[v_j] - a[v_j-1]) >= 0)){   //Executed if already calculating a substring
                    cout<<"In else !";
                    subStrings[currSubStr] += 2;    //To add first and last elements.
                    inSubStr = false;
                    currSubStr++;
            }

            //cout<<subStrings[0]<<"\n";
        }
        cout<<subStrings[0];

        //Printing substring with least length.

        min_sub_length = subStrings[0];
        for(i = 1; i<= currSubStr; i++){
            if(min_sub_length < subStrings[i]){
                min_sub_length = subStrings[i];
            }
        }
        //cout<<min_sub_length<<"\n";
    }

}

int int_arr_length(int *arr){
    return sizeof(arr)/sizeof(arr[0]);
}

void optimiszeIO(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);  //Remember to flush out cout everytime !
}
