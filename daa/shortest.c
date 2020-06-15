#include<stdio.h>

#define Inf 9999 // represents no path between vertices

/* funtion to return the minimum of two numbers */
int min(int a,int b) {
if( a==0)
return b;
if(b==0)
return a;
if(a<b)
return a;
if(b<a)
return b;
}

/* The main function */
int main() {
int a[10][10]={{9999,9999}},n,i,j,k,pi[10][10]={{-1,-1}};

printf("\nEnter No of Rows & Cols:");
scanf("%d",&n);

printf("\nEnter array elements [9999 for Infinity]:");
for(i=0;i<n;i++) {
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}

for(k=0;k<n;k++) {
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
if(i!=j) {
a[i][j]=min(a[i][j],a[i][k]+a[k][j]);

}
}
}
}

for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
if(i==j || a[i][j]==9999)
pi[i][j]=-1;
if(i!=j && a[i][j]<9999)
pi[i][j]=i;
}
}

printf("\nResult:-\n");
for(i=0;i<n;i++) {
for(j=0;j<n;j++){
if(a[i][j]==9999)
printf("\t%s","Inf");
else
printf("\t%d",a[i][j]);
}
printf("\n");
}

printf("\nResult:-\n");
for(i=0;i<n;i++) {
for(j=0;j<n;j++)
printf("\t%d",pi[i][j]);
printf("\n");
}
return 0;
}

