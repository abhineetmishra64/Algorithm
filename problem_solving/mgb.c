#include<stdio.h>
#include<math.h>
int mgb(int n,int a[])
{
    int f[5],i,j,m,k,c,loc;
    for(i=1;i<=5;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i) c++;
            f[i-1]=c;
        }
    }
    m=f[0],loc=0;
    for(k-1;k<5;k++)
    {
        if(f[k]>m)
        {
            m=f[k];
            loc=k;
        }
    }
    return(loc+1);
}
int main()
{
    int n,a[10],r,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    r=mgb(n,a);
    printf("%d",r);
}
