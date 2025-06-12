// https://codeforces.com/problemset/problem/1857/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long odd = 0;
        for (int i = 0; i < n; i++){
            if (a[i] % 2 == 1)
                odd++;
        }

        if (odd%2 == 1) {  // all elements are equal
            cout << "No" << endl;
        } 
        else {
            cout << "Yes"<<endl;
        }
    }
    return 0;
}
// TC:O(n*t)
// SC:O(n)
