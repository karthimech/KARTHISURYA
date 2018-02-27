#include<stdio.h>
void main()
{
    int p,q,r,s=0;
    scanf("%d",&p);
    q=p;
    while(q!=0)
    {
        r=q%10;
        s=s+r*r*r;
        q=q/10;
    }
    if(s==p)
    {
        printf("armstrong",p);
    }
    else
    {
        printf("not armstrong",p);
    }
}
