#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,disc,r1,r2;
    cout<<"Enter a, b and c values to find roots of quadrstic equation"<<endl;
    cin>>a>>b>>c;

    disc = b*b+4*a*c/(2*a);
    cout.precision(10);
    if(disc > 0)
    {
        r1 = -b+sqrt(disc)/(2*a);
        r2 = -b-sqrt(disc)/(2*a);

        cout<<"roots of quadratic equation is : "<<r1 <<" and "<<r2<<endl;
    }
    else{
        r1 = -b/(2*a)+(-1*sqrt(disc))/(2*a);
        r2 = -b/(2*a)-(-1*sqrt(disc))/(2*a);
        cout<<"roots of quadratic equation is : "<<r1 <<" and "<<r2<<"i"<<endl;
    }
    return 1;
}