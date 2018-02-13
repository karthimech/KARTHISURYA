#include<stdio.h>
void main()
{
    int j,a,b,c;
    printf("Enter the number");
    scanf("%d",&a);
    for(j=2;j<a;j++);
    {
        b=a%j;
        if(b==0);
        {
            c++;
        }
        
    }
   if(c==0||a==1)
   printf("Prime");
   else
   printf("NO");
}
