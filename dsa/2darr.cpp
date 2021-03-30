#include<iostream>
using namespace std;

int main(){
    int a[10][10],i,j,k,l,max = -63, sum = 0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            int top = a[i][j] + a[i][j+1] + a[i][j+2];
            int mid = a[i+1][j+1];
            int bottom = a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            int hglass = top + mid + bottom;
            if(hglass>max){
                max = hglass;
            }
        }
    }
    sum = max;
    cout << "Sum "<<sum << endl;
    return 0;
}