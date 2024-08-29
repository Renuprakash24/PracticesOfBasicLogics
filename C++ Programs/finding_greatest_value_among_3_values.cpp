//finding greatest number among 3 values

#include<iostream>
using namespace std;

int main()
{
    int input_value1, input_value2, input_value3;
    
    cout<<"Enter input values"<<endl;
    cin>>input_value1>>input_value2>>input_value3;
    
    if(input_value1 >= input_value2 && input_value1 >= input_value3)
    {
        cout<<"input_value1 "<<input_value1<<" is greatest value"<<endl;
    }
    else if(input_value2 >= input_value1 && input_value2 >= input_value3)  
    {
       cout<<"input_value2 "<<input_value2<<" is greatest value"<<endl; 
    }
    else
    {
        cout<<"input_value3 "<<input_value3<<" is greatest value"<<endl;
    }
    return 0;
}