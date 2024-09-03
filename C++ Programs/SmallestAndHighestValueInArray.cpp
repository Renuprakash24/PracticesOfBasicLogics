#include<iostream>
using namespace std;
int main()
{
    int array_user[5];
    int min_value, max_value;
    int temp_variable;

    cout<<"Enter the array"<<endl;
    for(int index = 0; index < 5; index++)
    {
        cin>>array_user[index];
    }

    min_value = array_user[0];
    max_value = array_user[0];
    // 10 7 78 5 4
    for(int index = 1; index < 5; index++)
    {
        if(min_value > array_user[index])
        {
            min_value = array_user[index];    
        }
        else if(max_value < array_user[index])
        {
            max_value = array_user[index];     
        }
    }
    cout<<"minimum value of the array : "<<min_value<<endl;
    cout<<"maximum value of the array : "<<max_value<<endl;
    return 1;
}