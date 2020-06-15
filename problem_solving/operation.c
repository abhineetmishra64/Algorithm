#include<stdio.h>
#define MAX_SIZE(1111)
int a[MAX_SIZE];
int main()
{
	int t,n,i,j,s1,s2,ti;
	scanf("%d",t);
	for(j=0;j<t;j++)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++) scanf("%d",&a[i]);
	}
	for(k=0;k<n;k++)
	{
		s1=a[k];
		for(i=0;i<n;i++) 
		{
			s2=a[i];
			ti = (s1 | (s1 & s2)) ^ (s2 & (s2 | s1));
		}
	}

