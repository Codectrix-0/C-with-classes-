#include<iostream> 
using namespace std; 
int main()
{
int x[100],n,i,j,v,f=0; 
cout<<"how many elements="; 
cin>>n;
cout<<"\n enter the element="; 
for(i=0;i<n;i++)
{
cin>>x[i];
}
cout<<"\n enter value to be deleted="; 
cin>>v;
for(i=0;i<n;i++)
{
if(x[i]==v)
{ 
f=1;
for(j=i;j<n-1;j++)
{
x[j]=x[j+1];
}
n--;
break;
}
}
if(f==1)
{
cout<<"\n value deleted remaing value of array are=\n"; 
for(i=0;i<n;i++)
{
cout<<"\n"<<x[i];
}
}
else
cout<<"\n"<<" value does not exist";
return 0;
}