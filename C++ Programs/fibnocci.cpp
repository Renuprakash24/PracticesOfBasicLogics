#include<iostream>
using namespace std;
int main()
{
    int user_n_number;
    int first = 0; 
    int second = 1;
    int calculation = 0;
    cout<<"Enter the number"<<endl;
    cin>>user_n_number;

    for(int index = 2; index <= user_n_number; index++)
    {
        //cout<<first<<endl;
        calculation = first + second;
        first = second;
        second = calculation;
    }
    cout<<calculation<<endl;
    return 1;
}
