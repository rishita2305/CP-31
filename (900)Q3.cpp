// https://codeforces.com/problemset/problem/1878/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
    long long n,k,x;
    cin >> n >> k >> x ;
    long long minsum = (k*(k+1))/2;
    long long maxsum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    
    if(x<=maxsum && x>=minsum){
        cout<<"Yes"<<endl;
        }   
    else{
        cout <<"No"<<endl;
        }
    }
    return 0;
}
// total tc = O(1)
// total sc = O(1)
