#include<stdio.h>
void main()
{
    int s,a[10],i,t;
    printf("enter the limits");
    scanf("%d",&s);
    printf("\nenter the number");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<s;i++)
    {
    if(t<a[i])
    {
        t=a[i];
    }
    }
    printf("\n %d",t);
}
