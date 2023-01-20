/******************************************************************************
10. Write functions using function overloading to add two numbers having different data
types.
*******************************************************************************/

#include <iostream>

using namespace std;
float add(float,float);
int add(int,int);
int main()
{   
    float n1;
    float n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
  cout<< add(n1,n2);
   int a;
   float b;
   cout<<"Enter two numbers"<<endl;
   cin>>a>>b;
   cout<<add(a,b);

    
    return 0;
}
float add(float x, float y)
{
    return x+y;
}
int add(int x,int y)
{
    return x+y;
}




