#include<iostream>
using namespace std;
int main()
{
    int input_number_from_user;
    int factorial = 1;
    cout<<"enter the number"<<endl;
    cin>>input_number_from_user;

    while(input_number_from_user > 1)
    {
        factorial = factorial * input_number_from_user;
        input_number_from_user--;
    }
    cout<<"factorial of given number : "<<factorial<<endl;
    return 10;
}