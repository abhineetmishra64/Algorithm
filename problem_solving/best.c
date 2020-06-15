#include<stdio.h>
int main()
{
	int n,a[100],i,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	int highest=a[0];
	int lowest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>highest)
		{
			c=c+1;
			highest=a[i];
		}
		if(a[i]<lowest)
		{
			d=d+1;
			lowest=a[i];
		}
	}
	printf("%d \n",c);
	printf("%d \n",d);
	return 0;
}
