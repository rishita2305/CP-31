// https://codeforces.com/problemset/problem/1853/A
#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      long long arr[n];
      for(int i =0; i<n;i++){
          cin >> arr[i];
      }
      long long ops = INT_MAX;
      for(int i =0; i <n-1; i ++){
          if(arr[i]<=arr[i+1]){
              long long diff = arr[i+1]-arr[i];
              long long reqOps = diff/2 +1;
              ops = min(ops, reqOps);
          }
          else{
              ops = 0;
          }
      }
      cout <<ops <<endl;
   }
   return 0;
}
// TC : O(n*t)
// SC : O(n*t)
