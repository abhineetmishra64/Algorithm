#include<stdio.h>
#include<limits.h> //included to use INT_MAX, which returns the maximum integer value
#include<malloc.h>

/* This recursive function prints the Optimal Parenthesization of matrix chain order */
void printOptimalParen(int **s, int i, int j){
if(i==j)
printf("A%d ",i);
else{
printf(" ( ");
printOptimalParen(s,i,s[i][j]);
printOptimalParen(s,s[i][j]+1,j);
printf(" ) ");
}
}

int matrixChainOrder(int *a, int n,int **s){
int i,j,k,l,cost;
int m[n][n]; // for program simplicity ignores the 0th row and column

for(i=1;i<n;i++) // cost is zero when multiplying one matrix, so
m[i][i]=0; // assign 0 to digonal elements

for(l=2;l<n;l++){ // l is chain length.
for(i=1;i<n-l+1;i++){
j=l+i-1;
m[i][j]=INT_MAX; // initialize m[i][j] with a larger value
for(k=i;k<=j-1;k++){
// cost = cost of multiplications
cost=m[i][k]+m[k+1][j]+a[i-1]*a[j]*a[k];
if(cost<m[i][j]){ // if cost is less then
m[i][j]=cost; // update m[i][j] with cost
s[i][j]=k; // store value of k in temporary array
}
}
}
}
return m[1][n-1];
}

/* the main function() */
int main(){
int arr[]={10,20,50,1,100}, i;

int n=sizeof(arr)/sizeof(int); //returns size of an integer array

int **s=(int **)malloc(sizeof(int *)*n); //create one integer array of pointers dynamically

for(i=0;i<n;i++)
s[i]=(int *)malloc(sizeof(int)*n); // dynamically allocates n no of integer memory
// to the pointer array elements

printf("\nMinimum number of multiplications is %d\n",matrixChainOrder(arr,n,s));

printOptimalParen(s,1,n-1); // prints the Optimal Parenthesization

printf("\n");

return 0;
}
