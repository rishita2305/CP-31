// https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long arr[n];
        for(int i =0; i<n; i++){
           cin >> arr[i];
        }
        
        long long total_xor = 0;
        for(int i =0; i<n; i++){
           total_xor ^= arr[i];
        }
        if(n%2 == 1){
            cout << total_xor <<endl;
        }
        else{
            if(total_xor == 0){
                cout<< total_xor <<endl;
            }
            else{
                cout <<-1<<endl;
            }
        }
    }
    return 0;
}

//total tc = O(n)
// total sc = O(n)
