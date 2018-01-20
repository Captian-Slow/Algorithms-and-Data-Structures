#include<iostream>

using namespace std;

int peak(int arr[], int n)
{
    //Divide and Conquer
    int mid = n/2, high = n, low = 0;

    if(arr[n - 1] > arr[n - 2])
    {
        cout<<"boo";
        return n - 1;
    }

    if(arr[0] > arr[1])
    {
        return 0;
    }

    while(high >= low)
    {

        cout<<arr[mid]<<"\n";
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return arr[mid];

        if(arr[mid] < arr[mid - 1])
        {
            high = mid - 1;
            mid = (low + high)/2;
        }
        else
        {
            low = mid + 1;
            mid = (low + high)/2;
        }
    }
}

int linearPeak(int arr[], int n)
{
    for(int i=0;i<n;i++)
   {

       if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
       return i;

   }

}

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Peak found at: "<<pfeak(arr, n);
    return 0;
}
