// https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
           cin >> arr[i];
        }
        int hua=0;
        for(int i = 0; i<n; i++){
            if(arr[i]==k){
                cout<< "YES" <<endl;
                hua = 1;
                break;
            }
        }
        if(hua==0){
            cout<< "NO" <<endl;
        }
 }
};
//total tc = O(n*t)
// total sc = O(n)
