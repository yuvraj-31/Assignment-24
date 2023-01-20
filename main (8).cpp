/******************************************************************************
8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle
*******************************************************************************/

#include <iostream>

using namespace std;
float area(float );
float area(double,float);
float area(float,float);
int main()
{   
   float r;
   cout<<"enter radius"<<endl;
   cin>>r;
   cout<<"area of circle is "<<area(r)<<endl;
   double l;
   float b;
   cout<<"enter length and breadth of rectangle"<<endl;
   cin>>l>>b;
   cout<<"area of rectangle is "<<area(l,b)<<endl;
   float base,h;
   cout<<"enter height and base of triangle"<<endl;
   cin>>base>>h;
   cout<<"area of triangle is "<<area(base,h)<<endl;
   
   
   
    return 0;
}
float area(float r)
{
   return 3.14*r*r;
}
float area(double l,float b)
{
    return l*b;
}
float area(float b, float h)
{
    return 0.5*b*h;
}



