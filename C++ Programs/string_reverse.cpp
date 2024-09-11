#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str_user;
    string Rev_str;
    cout<<"Enter the string "<<endl;
    cin>>str_user;

    int size_str = str_user.length();

    for(int Idx = size_str - 1; Idx >= 0; Idx--)
    {
        // cout<<"Rev string : "<<endl;
        cout<<str_user[Idx];
    }
    return 1;
}