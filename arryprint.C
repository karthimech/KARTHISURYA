#include<stdio.h>
int main()
{
int k,a,i,j;
scanf("%d",&k);
int b[k];
printf("\n the input of an array is");
for(i=0;i<k;i++)
{
scanf("%d",&b[i]);
}
printf("\n the output of an array is");
for(j=0;j<k;j++)
{
printf("%d",b[j]);
}
return 0;
}
