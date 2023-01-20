/******************************************************************************
3. Define a function to calculate x raised to the power y.
*******************************************************************************/

#include <iostream>

using namespace std;
int power(int x, int y);
int main()
{   
    int x,y;
    cout<<"Enter the number"<<endl;
    cin>>x;
    cout<<"Enter the power"<<endl;
    cin>>y;
    
    cout<<power(x,y);

    return 0;
}

int power(int x, int y)
{  
    int temp=x;
    for(int i=y;i>1;i--)
    {
        temp=temp*x;
    }
    return temp;
}
