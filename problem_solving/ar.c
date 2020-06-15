#include<stdio.h>
int main()
{
	int n,arr[100],l,k,i,j,a,m,sum,count=0;
	scanf("%d %d",&n,&k);
	for(l=0;l<n;l++)
	{
		scanf("%d",&arr[l]);
	}
	for(m=0;m<n;m++)
	{	
		for(a=0;a<n;a++) 
		{
			if(m<a)
			{
				sum=arr[m]+arr[a];
				if(sum%k==0)
				{
					count++;
				}
			}
		}
	}
	printf("%d",count);
}
