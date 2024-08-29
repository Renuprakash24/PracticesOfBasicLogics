//checking odd number or even number

#include<iostream>
using namespace std;
int main()
{
    int input_value;
    cout<<"Enter the value"<<endl;
    cin>>input_value;
    
    if(input_value%2 == 0)
    {
        cout<<"value is even"<<endl;
    }
    else
    {
        cout<<"value is odd"<<endl;
    }
    return 0;
}