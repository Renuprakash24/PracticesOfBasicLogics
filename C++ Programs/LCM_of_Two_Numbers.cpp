#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;

    for(int index = 1; index > 0; index++)
    {
        // if(index%num1==0 && index%num2==0)s
        if(index%num1==0 && index%num2==0)
        {
            cout<<"LCM is : "<<index<<endl;
            break;
        }
    }
    return 1;
}