#include<iostream>
#include<stdlib.h>

using namespace std;

void optimiszeIO();
bool check_for_abs_diff_1(int num);

int main(){

    int k, n, t, *a;
    optimiszeIO();
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n>>k;
        a = new int[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] < k && check_for_abs_diff_1(a[i])){
                cout<<a[i]<<" ";
            }
        }
        free(a);
        cout<<"\n";
    }
}

bool check_for_abs_diff_1(int num){

    int digit1, digit2;
        cout<<"\n "<<num<<":  \n";
    while(num > 0){
        if(num % 10 == 0)        //Checking for single digit values
            return true;
        digit1 = num % 10;
        num /= 10;
        digit2 = num%10;
        num /= 10;
        //cout<<"\n"<<abs(digit2 - digit1);
        if(abs(digit2 - digit1) != 1){
            return false;
        }
    }
    return true;
}

void optimiszeIO(){

    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);  //Remember to flush out cout everytime !
}

