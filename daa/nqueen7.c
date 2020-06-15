#include<stdio.h>
#include<stdlib.h>

void nQueen(int,int); /* Function to solve and print NQueen Problem */
int canPlaceQueen(int,int ); /* Function to check whether it is possible to place the Queen */

int a[10];

/* the main function */
int main() {
int n;
printf("\nENter the no of queen:");
scanf("%d",&n);
printf("Possible Solutions::\n");
nQueen(1,n);
}

/* Function to solve and print NQueen Problem */
void nQueen(int k,int n) {
int i,j;

for(i=1;i<=n;i++) {
if(canPlaceQueen(k,i)==1) { /* if possible then */
a[k]=i;
/* prints the possible solution */
if(k==n) {
for(j=1;j<=n;j++)
printf("\t%d",a[j]);
printf("\n");
}
else
nQueen(k+1,n); /* backtracking */
}
}
}

/* Function to check whether it is possible to place the Queen */
int canPlaceQueen(int k,int i) {
int j;

for(j=1;j<=k-1;j++) {
/* Check whether Queen is available */
if((a[j]==i) ||(abs(a[j]-i)==abs(j-k)))
return 0;
}
//return success if there in no conflicting Queens
return 1;
}
