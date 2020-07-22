#include<stdio.h>
void num(long n);
int digitsofnumber(long n);
int sumofdigits(long n);
void main()
{
long int n;
printf("enter number=");
scanf("%d",&n);
num(n);
}
void num(long n)
{
int s,a;
a=digitsofnumber(n);
if(a>1)
{
s=sumofdigits(n);
num(s);
}
else
printf("sum as single digid=%d",n);
}
int digitsofnumber(long n)
{
int c=0;
while(n!=0)
{
n=n/10;
++c;
}
return c;
}
int sumofdigits( long n)
{
int remainder,sum=0;
while(n!=0)
{
remainder=n%10;
sum=sum+remainder;
n=n/10;
}
printf("%d\n",sum);
return sum;
}