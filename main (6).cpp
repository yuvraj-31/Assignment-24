/******************************************************************************
6. Define a function to swap data of two int variables using call by reference.
*******************************************************************************/

#include <iostream>

using namespace std;
void swap(int &n1,int &n2);
int main()
{   
    int x,y;
    cout<<"Enter the numbers"<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<"after swapping "<<x<<" "<<y;
    return 0;
}
void swap(int &n1,int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}



