/******************************************************************************

  1. Define a function to check whether a given number is a Prime number or not.

*******************************************************************************/

#include <iostream>

using namespace std;
int checkprime(int);
int main()
{   
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(checkprime(a))
    {
        cout<<"given number is a prime number";
    }
    else
    {
        cout<<"given number is not a prime number";
    }

    return 0;
}
int checkprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
         return 0;
    }
    return 1;
}
