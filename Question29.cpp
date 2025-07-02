// https://codeforces.com/problemset/problem/1777/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n ;
        long long arr[n];
        for(long long i =0; i<n; i++){
            cin >> arr[i];
        }
         long long ops = 0;
         
         for(long long i =0; i<n-1; i++){
             if(arr[i]%2 == arr[i+1]%2){
                 ops++;
             }
         }
        cout << ops << endl;
    }
    return 0;
}

//total tc = O(n)
// total sc = O(n)
