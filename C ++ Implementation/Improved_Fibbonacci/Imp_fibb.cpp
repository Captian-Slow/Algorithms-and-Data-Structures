#include<iostream>

#define NIL -1
#define MAX 100

int table[MAX];

using namespace::std;


int fib(int n)
{

    if(table[n] == NIL)
    {

        if(n <= 1)
            table[n] = n;

        else
        {

            table[n] = fib(n - 1) + fib(n - 2);
        }
    }

    return table[n];
}

void initialise()
{

    for(int i = 0; i < MAX; i++)
    {

        table[i] = NIL;
    }
}

int fib_old(int n)
{

    if(n <= 1)
        return n;

    return fib_old(n -1) + fib_old(n - 2);

 }

int main()
{
    int n;

    initialise();
    cout<<"Enter n: ";
    cin>>n;
    cout<<"\nThe fibonacci value is: "<<fib_old(n);
    cout<<"\nThe fibonacci value is: "<<fib(n);
}



