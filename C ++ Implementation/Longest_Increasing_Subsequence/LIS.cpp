#include<iostream>


using namespace::std;

int lis(int a[], int n)
{

    int i, j, lis_arr[n], max_lis = 0;

    for(i = 0; i < n; i++)
        lis_arr[i] = 1;

    for(i = 1; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {

            if(a[i] > a[j]  && (lis_arr[i] < lis_arr[j] + 1 ) )
                lis_arr[i] = lis_arr[j] + 1;
        }
    }

    for(i = 0; i < n; i++)
        if(max_lis < lis_arr[i])
            max_lis = lis_arr[i];

    return max_lis;
}

int main()
{

    int arr[50], n;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the numbers: ";

    for(int i = 0;i < n; i++)
        cin>>arr[i];

    int result = lis(arr, n);

    cout<<"The longest increasing substring is: "<<result;

    return 0;
}
