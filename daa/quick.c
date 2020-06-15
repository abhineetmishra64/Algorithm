#include<stdio.h>

/* This function is used to place the pivot element of the array[] at it's right place */

int partition(int *a,int l,int h){
int tmp,j;
int i=l-1; // stores lower index -1 in i
int pivot=a[h]; // takes last element as pivot
for(j=l;j<h;j++){ // loop until lower is lesser than higher
if(a[j]<pivot){ // If current element is smaller than the pivot
i++; // increment index of smaller element
tmp=a[j];
a[j]=a[i];
a[i]=tmp;
}
}
tmp=a[h]; //swap the pivot element
a[h]=a[i+1];
a[i+1]=tmp;
return (i+1);
}


//The main function that implements QuickSort
void qSort(int *a, int l, int h) {
if(l<h) {
int pi=partition(a,l,h); //get the index of pivot element
qSort(a,l,pi-1); //recursive call for the left part
qSort(a,pi+1,h); //recursive call for the right part
}
}
/* the main function() */
int main() {
int n,i;

printf("\nEnter No of elements: ");
scanf("%d",&n);

int arr[n]; //creating the array of size n

printf("\nEnter Array elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

qSort(arr,0,n-1); //calling Quick Sort Function

printf("\nSorted Array:-\n");
for(i=0;i<n;i++)
printf("\t%d",arr[i]);

return 0;
}
