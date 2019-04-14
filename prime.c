#include<stdio.h>
#include<conio.h>
int main()
{
int n, i,count=0;
printf("Enter any no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if (n%i==0)
count++;
}
if (count==2)
printf("The no. is prime");
else
printf("the no. is not prime");
return 0;
}

