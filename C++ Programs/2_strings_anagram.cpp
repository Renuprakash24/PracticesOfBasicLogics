#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string user_str_1;
    string user_str_2;
    
    bool Result = false;

    cout<<"Enter the two strings  "<<endl;
    cin>>user_str_1>>user_str_2;

    if(user_str_1.length() == user_str_2.length())
    {
        sort(user_str_1.begin(), user_str_1.end());
        sort(user_str_2.begin(), user_str_2.end());
        for(int idx = 0; idx < user_str_1.length(); idx++)
        {
            if(user_str_1[idx] == user_str_2[idx])
            {
                Result = true;
            }
            else{
                Result;
            }
        }
    }
    
    if(Result == true)
    {
        cout<<"strings are anagram"<<endl;
    }
    else
    {
        cout<<"strings are not anagram"<<endl;
    }
    return 1;
}