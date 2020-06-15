#include<stdio.h>
int main()
{
	int t,n,a[100],i,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		int c,s;
		//printf("Enter the no. ofelement of an array");
		scanf("%d",&n);
		for(i=0;i<n;++i) scanf("%d",&a[i]);
		c=0;
		s=1;
		for(i=1;i<n;i++)
		{
			//printf("Enter the element of an array");
			//scanf("%d",&a[i]);	
			if(a[i]==a[i-1]+1) ++s;
		       	else {
				if(s>1) ++c;
				s=1;
			}
		}
		if(s>1)++c;
		printf("\nfor tc %d, ans :  %d\n", j+2, c);
	}
	return 0;
}
