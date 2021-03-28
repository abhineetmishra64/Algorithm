#include<iostream>
using namespace std;

int main(){
    int a[10], b[10], i, n, r, j;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the no. of index to be rotated";
    cin>>r;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        j=i-r;
        if (j>=0) b[i-r]=a[i];
        else if (j<0) b[n+j] = a[i];
    }
    for(i=0;i<n;i++){
        cout<<b[i];
        cout<<" ";
    }
    cout<<"\n";
}