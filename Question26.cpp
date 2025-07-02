// https://codeforces.com/problemset/problem/1789/A
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
        
        int flag =0;
        for(int i =0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i],arr[j]) <= 2){
                    flag = 1;
                }
            }
        }
        if(flag==1) cout<< "Yes"<<endl;
        else cout << "No" << endl;
        } 
    return 0;
}
//total tc = O(n^2 * log2(min(arr[i],arr[j])))
// total sc = O(n)
