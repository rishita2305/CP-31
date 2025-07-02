// https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n ;
        vector<long long> arr(n);
        for(int i =0; i<n; i++){
            cin >> arr[i];
        }
        
        int total =0;
        int current =0;
        
        for(long long i =0; i<n;i++){
            if(arr[i]==2) total++;
        }
        
        int ans =-1;
        
        for(long long i =0; i<n;i++){
            if(arr[i]==2){
                current++;
            } 
            if(current==(total-current)){
                ans=i+1;
                break;
            }
        }
        cout << ans << endl;
        } 
    return 0;
}

//total tc = O(n)
// total sc = O(n)
