#include<iostream>
using namespace std;
int main()
{
    string input_str_from_user;
    cout<<"enter the string"<<endl;
    cin>>input_str_from_user;
    int initial_length_of_the_str = 0;

    for(int index = 0; input_str_from_user[index] != 0; index++)
    {
        initial_length_of_the_str++;
    }
    cout<<"length of the string is "<<initial_length_of_the_str<<endl;
    return 10;
}
