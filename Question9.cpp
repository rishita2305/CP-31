// https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n-1);
        int sum =0;
        for(int i = 0 ; i<n-1 ; i++){
           cin >> arr[i];
           sum+= arr[i];
        }
        int res = 0-sum;
        cout << res << endl;
 }
};
//total tc = O(n*t)
// total sc = O(n)
