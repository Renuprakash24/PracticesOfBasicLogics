#include<iostream>
using namespace std;
int main()
{
    int n,i,j,l;
    
    cout<<"enter the n'th value"<<endl;
    cin>>n;
    
    //1
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < i+1; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //2
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //3
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n-i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //5
    // for(int i = -n; i <= n; i++)
    // {
    //     if(i < 0)
    //     {
    //         l = -i;
    //     }
    //     else
    //     {
    //         l = i;
    //     }
    //     for(int s = 0; s < n-l; s++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j < l+1; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 

    //pyramid
    int s;
    for(i = -n; i <= n; i++)
    {
        if(i < 0)
        {
            l = -i;
        }
        else
        {
            l = i;
        }
        
        for(s = 0; s < l; s++)
        {
            cout<<"  ";
        }
        for(int j = 0; j < 2*(n - l)+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 1;
}