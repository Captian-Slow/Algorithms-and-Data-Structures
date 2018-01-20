#include<iostream>
#include<string>


using namespace::std;


int max_num(int a, int b)
{

    return (a > b)?(a):(b);
}

int lcsRecursive(string s1, string s2, int m, int n)
{

    if(m == 0 || n == 0)
        return 0;

    if(s1[m-1] == s2[n-1])
        return 1 + lcsRecursive(s1, s2, m - 1, n - 1);

    else
        return max_num(lcsRecursive(s1, s2, m  - 1, n) , lcsRecursive(s1, s2, m, n - 1));

}

int main()
{

    string s1, s2, s3 = "";
    int t, a, b, i, j;

    cin>>t;

    while(t != 0)
    {

        cin>>a>>b;
        cin>>s1>>s2;

        cout<<lcsRecursive(s1, s2, a, b);

        t--;
    }

    return 0;
}



