#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int main()
{
    int i,j,h[26];
    for(i=0;i<26;i++) scanf("%d",&h[i]);
    char*str=(char*)malloc(512000*sizeof(char));
    scanf("%s",str);
    int t=h[str[0]-97];
    int len=strlen(str);
    for(j=0;j<len;j++)
    {
        if(t<h[str[i]-97]) t=h[str[i]-97];
    }
    printf("%d",(t*len));
}
