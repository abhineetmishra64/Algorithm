#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char num[1000];
    int i,a,j,arr[10]={0};
    scanf("%s",num);
    a=strlen(num);
    for(j=0;j<a;j++)
    {
        if(num[j]>='0' && num[j]<='9')
        {
           arr[num[j]-'0']++;
        }
    }
    for(i=0;i<10;i++) printf("%d ",arr[i]);
}
