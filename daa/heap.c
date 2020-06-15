#include<stdio.h>

// this function is used to construct the max_heap
void heapify(int *a, int n, int i){
int largest=i; // index of root element
int l=2*i+1; // index of left child
int r=2*i+2; // index of right child

if(l<n && a[l]>a[largest]) //If left child is larger than root element
largest=l;
if(r<n && a[r]>a[largest]) //if right child is largest
largest=r;
if(largest!=i){ //if largest is not the final root element
int t=a[i]; //swap the largest with root element
a[i]=a[largest];
a[largest]=t;
heapify(a,n,largest); // Recursively call heapify
}
}

//heapsort function
void heapSort(int *a, int n){
//construct the max_heap
for(int i=n/2-1;i>=0;i--)
heapify(a,n,i);
//remove root element from the heap and heapify
for(int i=n-1;i>=0;i--){
int t=a[0]; //place the root element at the end of the array
a[0]=a[i];
a[i]=t;
heapify(a,i,0); //Recursively call heapify excluding the last element of the array
}
}

/* the main function() */
int main(){
int n,i;

printf("\nEnter No of elements: ");
scanf("%d",&n);

int arr[n];

printf("\nEnter Array elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

heapSort(arr,n); //calling the heapSort function

printf("\nArray after Heap Sort :\n");

for(int i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");

return 0;
}
