#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string input_str_from_user;
    cout<<"enter the string"<<endl;
    cin>>input_str_from_user;

    for(int index = 0; input_str_from_user[index] != 0; index++)
    {
        if(islower(input_str_from_user[index]))
        {
            input_str_from_user[index] = toupper(input_str_from_user[index]);
        }
        else
        {
            input_str_from_user[index] = tolower(input_str_from_user[index]);
        }
    }
    cout<<"Toggled string "<<input_str_from_user<<endl;
    return 1;
}   