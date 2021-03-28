#include<iostream>
#define MAX 1000
using namespace std;
int main(){
    int n, r, i, j,count;
    string s[MAX], q[MAX];
    cout<<"Enter the size of input string";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<"Enter the size of queue string";
    cin>>r;
    for(i=0;i<r;i++){
        cin>>q[i];
    }
    for(i=0;i<r;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(q[i]==s[j]) count++;
        }
        cout<<count<<"\n";
    }
}