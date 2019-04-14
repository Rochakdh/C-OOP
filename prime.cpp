#include<iostream>
using namespace std;
int main()
{
int n, i,count=0;
cout<<"Enter any no.";
cin>>n;
for(i=1;i<=n;i++)
{
if (n%i==0)
count++;
}
if (count==2)
cout<<"The no. is prime";
else
cout<<"the no. is not prime";
return 0;
}

