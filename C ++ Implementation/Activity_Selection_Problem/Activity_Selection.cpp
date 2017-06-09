#include<iostream>

using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
    int currentActivity = 0, offset = 1;
    cout<<"\n"<<s[currentActivity]<<" : "<<f[currentActivity];
    currentActivity++;
    for(; currentActivity < n; currentActivity++)
    {
        if(s[currentActivity] >= f[currentActivity - offset])
        {
            cout<<"\n"<<s[currentActivity]<<" : "<<f[currentActivity];
            continue;
        }
        offset++;
    }
}

int main()
{
    int n =  3;
    int s[n] =  {10, 12, 20};
    int f[n] =  {20, 25, 30};
    cout<<"Size of n: "<<n<<"\n\n";
    printMaxActivities(s, f, n);
    return 0;
}

