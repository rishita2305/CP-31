// https://codeforces.com/problemset/problem/1862/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
   while(t--){
       long long n;
       cin >> n;
       vector<long long> b(n),a;
       for(int i =0; i<n; i++){
           cin >> b[i];
       }
       a.push_back(b[0]);
       for(int i =1; i<n; i++){
           if(b[i]>=b[i-1]){
               a.push_back(b[i]);
           }
           else{
               a.push_back(b[i]);
               a.push_back(b[i]);
           }
       }
       cout << a.size() <<endl;
       for( auto it: a){
           cout << it <<" ";
       }
       cout<< endl;
   }
   return 0;
}
// TC O(n*t)
// SC O(n)
