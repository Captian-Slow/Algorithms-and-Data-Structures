#include<iostream>

using namespace::std;

int min_num(int x, int y, int z)
{

   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;

}

int minCostExpo(int a[3][3], int i, int j)   //Exponential runtime.
{

    //cout<<"\n"<<a[i][j];
    if(i == 2 && j == 2)
        return a[i][j];

    if(i < 3 && j < 3)
        return a[i][j] + min_num(minCostExpo(a, i + 1, j), minCostExpo(a,i, j + 1), minCostExpo(a, i + 1, j + 1));
}

int minCost(int a[3][3],int m,int n)
{

    int b[3][3];

    b[0][0] = a[0][0];

    for(int i = 1; i < 3; i++)
    {
        b[i][0] = b[i - 1][0] + a[i][0];
    }

    for(int i = 1; i < 3; i++)
    {
        b[0][i] = b[0][i - 1] + a[0][i];
    }

    for(int i = 1; i <= m; i++)
    {

        for(int j = 1; j <= n; j++)
        {

            b[i][j] = min_num(b[i - 1][j - 1], b[i - 1][j], b[i][j - 1]) + a[i][j];
        }
    }


    return b[2][2];
}

int main()
{

    int a[3][3], i, j;

    cout<<"Enter the array: \n";

    for(i = 0; i < 3; i++)
    {

        for(j = 0; j < 3; j++)
        {

            cin>>a[i][j];
        }

        cout<<"\n";
    }

    cout<<"In exponential runtime: "<<minCostExpo(a, 0, 0);
    cout<<"\nIn linear runtime: "<<minCost(a, 2, 2);
}


