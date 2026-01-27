#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first number=";
    cin>>a;
    cout<<"enter the second number=";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"\n value of a after swap="<<a;
    cout<<"\n value of b after swap="<<b;
    return 0;
}