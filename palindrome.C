#include<stdio.h>
#include<conio.h>]
void main()
{
int k,s=0,r,t;
clrscr();
printf("Enter n value\n");
scanf("%d",&k);
t=k;
while(k!=0)
{
r=k%10;
s=s*10+r;
k=k/10;
}
if(t==s)
{
printf("%d is palindrome",t);
}
else
{
printf("%d is not palindrome",t);
}
getch();
}
