#include<stdio.h>
void main()
{
    int k,d,n,total;
    printf("enter the initial value");
    scanf("%d",&k);
    printf("\nenter the difference");
    scanf("%d",&d);
    printf("\nnumber of terms");
    scanf("%d",&n);
    total=k+(n-1)*d;
    printf("%d",total);
}
