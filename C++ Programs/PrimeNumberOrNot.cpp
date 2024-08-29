#include<iostream>
using namespace std;
bool IsPrime()
{
    int getiing_num_from_user;
    cout<<"enter the number"<<endl;
    cin>>getiing_num_from_user;

    if(getiing_num_from_user <=1)
    {

        return false;
    }
    for(int Idx = 2; Idx < getiing_num_from_user; Idx++)
    {
        if(getiing_num_from_user%Idx == 0)
        {

            return true;
            // break;

        } 

    return false;     
    }
}

int main()
{
    int val = IsPrime();
    if(val == 0)
    {
        cout<<"Prime number"<<endl;
    }
    else
    {
        cout<<"not prime number"<<endl;
    }
    return 1;
}