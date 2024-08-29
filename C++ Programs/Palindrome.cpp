#include<iostream>
using namespace std;
int main()
{
    int number_from_user;
    cout<<"enter the number to check palindrome"<<endl;
    cin>>number_from_user;
    int compare;
    compare = number_from_user;
    int digit, rev = 0;

    while(number_from_user != 0)
    {
        digit = number_from_user%10;
        rev = (rev*10)+digit;
        number_from_user = number_from_user/10;
    }

    if(compare == rev)
    {
        cout<<"number is palindrome"<<endl;
    }
    else
    {
        cout<<"number is not palindrome"<<endl;
    }
    return 1;
}