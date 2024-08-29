#include<iostream>
using namespace std;
int main()
{
    char details_from_user;
    char vowel_array[5] = {'a','e','i','o','u'};
    cout<<"enter the english letter"<<endl;
    cin>>details_from_user;
    
    for(int index = 0; index < 5; index++)
    {
        if(details_from_user == vowel_array[index])
        {
            cout<<"letter is vowel"<<endl;
            break;
        }
        else
        {
            cout<<"letter is not vowel"<<endl;
            break;
        }
    }
    return 0;
}