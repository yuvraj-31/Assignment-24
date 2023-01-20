/******************************************************************************
5. Define a function to check whether a given number is a term in a Fibonacci series or
not.
*******************************************************************************/

#include <iostream>

using namespace std;
int fibo(int);
int main()
{   
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    
    fibo(x)?cout<<"yes it is Fibonacci":cout<<"no it is not a fibonacci";

    return 0;
}
int fibo(int n)
{
  int a=-1,b=1;
  int i=0;
  while(i<=n)
  {
      i=a+b;
      a=b;
      b=i;
      if(i==n)
       return 1;
  }
  return 0;
}


