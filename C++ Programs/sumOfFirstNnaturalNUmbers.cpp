#include<iostream>
using namespace std;

void sum()
{
    int number_from_user;
    int sum = 0;
    cout<<"Enter the natural number"<<endl;
    cin>>number_from_user;

    for(int idx = 0; idx <= number_from_user; idx++)
    {
        sum = sum + idx;
    }
    cout<<"sum of 1st n natural number : "<<sum<<endl;
}

int main()
{
    sum();
    return 10;
}