// https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);//n
        for(int i=0; i<n ; i++){
            cin >> arr[i];
        }
        if(arr[0]==1){
            cout <<"YES"<< endl;
        }
        else{
            cout << "NO"<< endl;
        }
        
}}
//total tc = O(tn)
// total sc = O(n)
