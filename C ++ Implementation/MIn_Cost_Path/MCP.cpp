#include<iostream>

using namespace::std;

int min_num(int a, int b, int c)
{

    int mini = a;

    if(b < a)
    {
        mini = b;
        if(c < b)
            mini = c;
    }

    if(c < a)
    {
        mini = c;
        if(b < c)
            mini = b;
    }

    return mini;

}

int minCost(int **a, int m, int n, int i, int j)
{

    if(i < m && j < n)
        return min_num(minCost(a, m, n, i + 1, j), minCost(a, m, n, i, j + 1), minCost(a, m, n, i + 1, j + 1));
}

int main()
{

    int a[50][50], i, j, m, n;

    cout<<"Enter the dimensions: "<<m<<n;

    cout<<"Enter the array: \n";

    for(i = 0; i < m; i++)
    {

        for(j = 0; j < n; j++)
        {

            cin>>a[i][j];
        }

        cout<<"\n";
    }

    cout<<minCost(&&a, m, n, 0, 0);
}


