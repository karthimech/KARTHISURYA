#include<stdio.h>
int main()
{
 int s,k,a[100],i,j=0;    
    printf("enter the value for s and k");  
    scanf("%d%d",&s,&k);    
    printf("enter the array");    
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=k;i++) 
    {
      j+=a[i]; 
    }
    printf("%d",j);
    }
