#include<iostream>
using namespace std;

int main(){
    int a[10000],n,i,j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    } 
    for(j=n-1;j>=0;j--){
        cout << a[j] << " ";
    }
    cout<<"\n";
}