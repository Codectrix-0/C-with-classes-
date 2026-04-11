/* Program to demonstrate the use of file handling in C++
   This program takes a message from the user and writes it to a file named "abc.txt  */



#include<fstream>
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char m[100];
    int i,l;
    ofstream x;
    x.open("abc.txt");
    cout<<"\n enter any message";
    cin>>m;
    l=strlen(m);
    for( i=0;i<l;i++)
    {
        x.put(m[i]);
    }
    x.close();
    return 0;
}
