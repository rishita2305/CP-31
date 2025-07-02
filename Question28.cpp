// https://codeforces.com/problemset/problem/1783/A
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
        for(int i =0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        long long max_num = arr[n-1];
        long long min_num = arr[0];
        if(max_num == min_num){
            cout << "No" <<endl;
        }
        else{
            cout << "Yes" <<endl;
            cout << max_num <<" ";
            for(int i =0; i<n-1; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

//total tc = O(nlogn + n)
// total sc = O(n)
