#include<stdio.h>
#include<math.h>
void main()
{
int p,q,i,temp1,temp2,rem,n=0,result=0;
printf(" enter the interval ");
scanf("%d%d",&p,&q);
for(i=p+1;i<q;i++)
{
temp1=i;
temp2=i;
while(temp1!=0)
{
temp1=temp1/10;
++n;
}
while(temp2!=0)
{
rem=temp2%10;
result+=pow(temp2,n);
temp2/=10;
}
if(i==result)
{
printf("%d",i);
}
return 0;
}
}



