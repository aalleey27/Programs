#include<iostream>
using namespace std;

int main()
{
    int p,b,r=1;
    cout<<"Enter base value\n";
    cin>>b;
    cout<<"Enter power value\n";
    cin>>p;
    while (p!=0)
    {
        r *=b;
        --p;
    }
    cout<<"result is: "<<r;
    return 0;
}