#include<iostream>
using namespace std;
int main()
{
    string input_string_from_user;
    cout<<"enter the string"<<endl;
    cin>>input_string_from_user;
    char vowel_array[] = {'a','e','i','o','u'};
    int vowelcount = 0;
    int size_of_the_string = input_string_from_user.size();
    cout<<"size of the str "<<size_of_the_string<<endl;
    for(int index = 0; index < size_of_the_string+1; index++)
    {
        if(input_string_from_user[index] == vowel_array[index])
        {
            vowelcount++;
        }
        else
        {
           // cout<<"there is no vowel letter in the given string"<<endl;
        }
    }
    cout<<"count of vowel in the given string "<<vowelcount<<endl;
    return 19;
}