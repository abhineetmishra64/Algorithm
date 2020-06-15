#include<stdio.h>
int main()
{
    int n,p,i,c=0;
    scanf("%d",&n);
    scanf("%d",&p);
    if((n/2)>=p)
    {
        c=p/2;
    }
    else{
        c=(n/2)-(p/2);
    }
    printf("%d",c);
}
