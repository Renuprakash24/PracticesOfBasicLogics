#include<iostream>
using namespace std;
int main()
{
    int user_array[5];
    int min_value = 0;
    int secondmin_value = 0;
    cout<<"enter array"<<endl;
    for(int index = 0; index < 5; index++)
    {
        cin>>user_array[index];
    }
    min_value = user_array[0];

    // 8 7 96 5 9
    for(int index = 0; index < 5; index++)
    {
        if(min_value > user_array[index])
        {
            secondmin_value = min_value;
            min_value = user_array[index];
        }
    }
    cout<<"1st : "<<min_value<<endl;
    cout<<"2nd : "<<secondmin_value<<endl;
    return 0;
}