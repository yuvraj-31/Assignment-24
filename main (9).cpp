/******************************************************************************
9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.
*******************************************************************************/

#include <iostream>

using namespace std;
float maxi(float,float);
float maxi(float,int);
int main()
{   
    float n1;
    float n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
   cout<< maxi(n1,n2);

    
    return 0;
}
float maxi(float x, float y)
{
    if(x>y)
     return x;
    else
     return y;
}
// float maxi(float x, int y)
// {
//     if(x>y)
//      return y;
//     else
//      return x;
// }




