#include<stdio.h>
void merge(int *a,int l, int m, int h){
int i,j,k;
int l1=m-l+1; //size of left sub array
int l2=h-m; //size of right sub array
int L[l1],R[l2]; // create 2 sub arrays
for(i=0;i<l1;i++) //initializing the left sub array
L[i]=a[l+i];
for(i=0;i<l2;i++) //initializing the right sub array
R[i]=a[m+1+i];
i=j=0;
k=l;
//comparing elements of left sub array with right sub array
while(i<l1 && j<l2){
if(L[i]<R[j]){ //if left is smaller
a[k]=L[i]; //store it in the actual array
i++;
}else{ // otherwise
a[k]=R[j]; //store right in the actual array
j++;
}
k++;
}
while(i<l1){ //storing remaining elements of left array
a[k++]=L[i++];
}
while(j<l2){ //storing remaining elements of right array
a[k++]=R[j++];
}
}

void mergeSort(int *a,int l,int h){
if(l<h){
int mid= l+(h-l)/2;; //index of midddle element

mergeSort(a,l,mid); // Sort first subarray
mergeSort(a,mid+1,h); // Sort second subarray

merge(a,l,mid,h); //merge first and second subarrays
}
}

/* the main function() */

int main() {
int n,i;

printf("\nEnter No of elements: ");
scanf("%d",&n);

int arr[n];

printf("\nEnter Array elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

mergeSort(arr,0,n-1);

printf("\nSorted Array:-\n");
for(i=0;i<n;i++)
printf("\t%d ",arr[i]);

return 0;
}

