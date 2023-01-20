/******************************************************************************
7. Write a function using the default argument that is able to add 2 or 3 numbers.
*******************************************************************************/

#include <iostream>

using namespace std;
int add(int,int,int=0);
int main()
{   
    int n;
    cout<<"select the choice"<<endl;
    cout<<"1. two number addition"<<endl;
    cout<<"2. three number addition"<<endl;
    cin>>n;
    if(n==1)
    { int x,y;
        cout<<"Enter the two numbers"<<endl;
       cin>>x>>y;
       cout<<"sum is "<<add(x,y);
    }
    else
    { int x,y,z;
      cout<<"Enter the three numbers"<<endl;
       cin>>x>>y>>z;
    cout<<"sum is " <<add(x,y,z);
    }
    return 0;
}
int add(int n1,int n2,int n3)
{
   return n1+n2+n3;
}



