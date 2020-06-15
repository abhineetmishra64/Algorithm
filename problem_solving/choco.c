#include<stdio.h>
int result(int s[],int n,int m,int d);
int main()
{
	int s[100],n,d,m,i,r;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&s[i]);
	}
	scanf("%d %d",&d,&m);
	r=result(s,n,m,d);
	printf("%d",r);
}
int result(int s[],int n,int m,int d)
{
	int j,k,l=1,t=m,sum=0,count=0;
	for(j=0;j<n;j++)
	{
		sum=s[j];
		for(k=l;k<t;k++)
		{
			sum=sum+s[k];
		}
		if(sum==d) count++;
		t++;
		l++;
	}
	return count;
}	
