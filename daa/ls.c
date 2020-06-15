#include<stdio.h>

/* Iterative function to search key in arr[n] */
int linearSearch(int arr[],int n,int k){
int i;
for(i=0;i<=n;i++) { // iterate n times
if(arr[i]==k) // if key element matches return the index value
return i;
}
return -1; // return -1 if element not found.
}

/* Recursive function to search key in arr[low...high] */
int recLinearSearch(int arr[], int l, int h, int k){
if (h < l) //if higher index is less than lower index, element not found
return -1;
if (arr[l] == k) // if key element matches with array element at lower index
return l;
if (arr[h] == k) // if key element matches with array element at higher index
return h;
return recLinearSearch(arr, l+1, h-1, k);
}
/* Recursive function to search key in arr[n] */
int recLinearSearch2(int arr[], int n, int k){
if (n < 0) // if index becomes -ve, element not found
return -1;
if (arr[n] == k) // if key element matches
return n;
return recLinearSearch2(arr, n-1, k);
}

/* main function() */
int main(){

int size,k,i;

printf("\nEnter no of elements: ");
scanf("%d",&size);

int arr[size];

printf("Enter array elements:");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);

printf("\nEnter the element you want to search : ");
scanf("%d",&k);
/* call any one of the following function by un-commenting the line */
// int index = recLinearSearch(arr, 0, size-1, k);

// int index = recLinearSearch2(arr, size-1, k);

int index = linearSearch(arr, size-1, k);

if (index != -1)
printf("Element %d is present at index %d \n", k, index);
else
printf("Element %d is not present \n", k);
return 0;
}

