// https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        vector<long long> a(n); 
        for (int i= 0; i<n; i++){  //n
            cin >> a[i];
        }

    vector<long long> copy_a = a; //n
    sort(copy_a.begin(),copy_a.end()); //nlogn

    if (copy_a==a || k>1){ //n
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
return 0;
}
//total tc = O(n log2(n)) = O(100 log2(100)) = 100*7 = 700
// total sc = O(n) = O(100)= 100
