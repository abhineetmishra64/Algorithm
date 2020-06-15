#include<stdio.h>
int main()
{
	int n,a[100],j,i,k,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(j=1;j<6;j++)
	{
		for(k=0;k<n;k++)
		{
			if(a[k]==j) count++;
		}
		printf("%d",count);
		count=0;
	}
}
