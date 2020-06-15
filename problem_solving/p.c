#include<stdio.h>
#include<string.h>
void tstr(char str[],int num);
int main()
{
    char str[10];
    int num;
    scanf("%d",&num);
    tstr(str,num);
    printf("%s",str);
}




void tstr(char str[],int num)
{
    int n,len=0,i,rem;
    n=num;
    while(n!=0)
    {
        len++;
        n/=10;
    }
    for(i=0;i<len;i++)
    {
        rem=num%10;
        num/=10;
        str[len-(i+1)]=rem+'0';
    }
}