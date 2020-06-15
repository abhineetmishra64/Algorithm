#include<stdio.h>
#include<string.h>
int st(char s[],int len);
int main()
{
    char s[10];
    int n;
    scanf("%s",&s);
    int len=strlen(s);
    printf("%s \n",s);
    /*n=atoi(s);
    printf("%d \n",n);*/
    n=st(s,len);
    printf("%d",n);
}

int st(char s[], int len)
{
    int b=0,i;
    for(i=0;i<len;++i) {
        printf("%d \n",i);
        b=b*10+(s[i]-'0');
        printf("%d \n",b);
    }
    return b;
}