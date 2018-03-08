#include<stdio.h>
int main()
{
int a,b,k;
printf("enter the values");
scanf("%d%d%d",&a,&b,&k);
a=10;
b=5;
k=8;
if(a>b)
{
printf("b is minimum");
scanf("%d",&b);
}
if(b<k)
{
printf("b is minimum");
scanf("%d",&b);
}
printf("the minimum value is b");
}

