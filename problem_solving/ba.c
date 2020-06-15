#include<stdio.h>
#include<math.h>
int main()
{
    int n,bill[100000],k,b,m=0,i,a;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
        m=bill[i]+m;
    }
    m=m-bill[k];
    scanf("%d",&b);
    a=b-(m/2);
    if(a==0) printf("Bon Appetit");
    else if(b<m) printf("%d",a);

}
