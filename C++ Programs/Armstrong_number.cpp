#include<iostream>
using namespace std;
int main()
{
    int storing_number;
    int digit; 
    int calculation;
    
    for(int user_number = 1; user_number < 10000; user_number++)
    {
        storing_number = user_number;
        calculation = 0;
        while (storing_number != 0)
        {
            digit = storing_number%10;
            calculation = calculation + (digit*digit*digit);
            storing_number = storing_number/10;
        }
        if(calculation == user_number)
        {
         cout<<user_number<<" is a Armstrong number"<<endl;
        }
    }

    return 1;
    
} 
