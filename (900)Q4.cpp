// https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,n;
        cin >> a >> b >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        long long max_time = b;
        for(int i =0; i<n; i++){
            max_time += min(arr[i], a-1);
        }
        cout << max_time <<endl;
    }
    return 0;
}
// Total TC: O(n) 
// Total SC: O(n)
