// https://codeforces.com/problemset/problem/1766/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n,a,b;
        cin >> n >> a >> b;
        if( a+b+2 <= n || (a==b && a==n)){
            cout <<"Yes"<<endl;
        }
        else{
            cout << "No"<<endl;
        }
    }
    return 0;
}
// tc= O(1)
// sc= O(1)
