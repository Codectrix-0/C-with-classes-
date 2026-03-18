#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void getvalue()
    {
        cout<<"enter the value of complex number a and b";
        cin>>a>>b;
    }
    complex operator+(complex ob)
    {
        complex t;
        t.a=a+ob.a;
        t.b=b+ob.b;
        return (t);
    }
    complex operator-(complex ob)
    {
        complex t;
        t.a=a-ob.a;
        t.b=b-ob.b;
        return (t);
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i\n";
    }
};
    void display()
    {
        complex obj1,obj2,result,result1;
        obj1.getvalue();
        obj2.getvalue();

        result=obj1+obj2;
        result1=obj1-obj2;
        cout<<"input values:\n";
        obj1.display();
        obj2.display();
        cout<<"result of addition is:\n";
        result.display();
        cout<<"result of subtraction is:\n";
        result1.display();

    }
    int main()
    {
        display();
        return 0;
    }
