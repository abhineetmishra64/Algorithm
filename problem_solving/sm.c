#include<stdio.h>
int main()
{
    int n,s[10],i,j,c=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&s[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    i=0;
    while(i<n)
    {
        if(s[i]==s[i+1])
            {
                c++;
                i=i+2;
            }
        else i++;
    }
    printf("%d",c);
}
