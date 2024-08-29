//checking the number negative or positive

#include<iostream>
using namespace std;
int main()
{
    int input_value;
    cout<<"Enter the value"<<endl;
    cin>>input_value;
    
    if(input_value >= 0)
    {
        cout<<"postive value"<<endl;
    }
    else
    {
        cout<<"negative value"<<endl;
    }
    return 0;
}