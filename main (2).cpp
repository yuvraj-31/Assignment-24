/******************************************************************************

 2. Define a function to find the highest value digit in a given number.

*******************************************************************************/

#include <iostream>

using namespace std;
int highestdigit(int);
int main()
{   
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
     cout<<"highest digit in a given number is "<<highestdigit(a);
    

    return 0;
}
int highestdigit(int n)
{
    int highest=0,a;
    while(n!=0)
    {
      a=n%10;
      if(a>highest)
       { highest=a;}
       n=n/10;  
    }
    return highest;
}
