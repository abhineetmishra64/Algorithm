#include<stdio.h>
int main()
{
    int a[10000],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
}
