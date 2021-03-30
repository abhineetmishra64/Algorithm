#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x, y, qu, q, i, j, n;
    cin >> n >> q;
    vector <int> arr[n];
    int lastAnswer=0;
    for(i=0;i<q;i++){
        cin >> qu >> x >> y;
        int idx = (x^lastAnswer)%n;
        if(qu == 1){
            arr[idx].push_back(y);
        }
        else if(qu == 2){
            int in = y%((int)arr[idx].size());
            lastAnswer = arr[idx][in];
            cout<< lastAnswer << endl;
        }
    } 
}