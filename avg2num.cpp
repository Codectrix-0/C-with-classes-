#include<iostream>
using namespace std;
class Demo {
    int a,b;
    public:
    void getdata();
    friend float avg(Demo);
};
void Demo :: getdata()
{
    cout<<"input value of a and b : ";
    cin>>a>>b;
}
float avg (Demo x)
{
return(x.a+x.b)/2;
}
int main()
{
    Demo obj;
    obj.getdata();
    cout<<"average is : "<<avg(obj);
}
