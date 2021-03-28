#include<iostream>
using namespace std;

int main(){
    int a[100][100],i,j,r,c;
    a[0][0] = 0;
    cout<< "Enter the row size";
    cin>> r;
    cout<<"Enter the coloumn size";
    cin>>c;
    for(i=1;i<r;i++){
        cin>>a[i][0];
    }
    for(j=1;j<r;j++){
        cin>>a[0][j];
    }
    for(i=1;i<r;i++){
        for(j=1;j<r;j++){
            a[i][j] = a[i][0] * a[0][j];
        }
    }
    for(j=0;j<c;j++){
        for(i=0;i<c;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}