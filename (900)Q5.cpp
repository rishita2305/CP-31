// https://codeforces.com/problemset/problem/1869/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        if(n % 2 == 0){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        else{
            cout << 4 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        }
    }
    return 0;
}
// Total TC: O(n) 
// Total SC: O(n)
