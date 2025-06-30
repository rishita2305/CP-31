// https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        
        long long ans = n;
        long long left = 0;
        long long right = n-1;
        while(left<=right){
            if(s[left]!=s[right]){
                ans -=2;
            }
            else{
                break;
            }
            left++;
            right--;
        }
        cout << ans <<endl;
    }
    return 0;
}

//total tc = O(n)
// total sc = O(n)
