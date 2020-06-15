#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,j,k,n,count=0;
	char str[1000];
	//char str1[1000];
	printf("Enter a string");
	gets(str);
	len=strlen(str);
	printf("Frequency of a character");
	for(i=0;i<len;i++)
	{
		count=1;
		for(j=i+1;j<len;j++)
		{	
			if(str[i]==str[j]) 
			{	
				count++;
			}
			printf("%c %d\n",str[i],count);
		}
	}
	return 0;
}
