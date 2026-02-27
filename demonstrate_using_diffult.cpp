#include<iostream> 
using namespace std;
class MyClass
{
int x; 
int y;
public:
MyClass(); // constructor declared
};
MyClass :: MyClass() // constructor defined
{
x=100 ; 
y =200;
cout<<x<<"\n"<<y;
}
int main()
{
MyClass obj=MyClass() ; 
return 0; // object created and default constructor 
}
