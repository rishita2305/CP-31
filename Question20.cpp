// https://codeforces.com/problemset/problem/1831/A
#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int output[n];
        for(int i =0; i<n; i++){
            output[i]= n+1-arr[i];
            cout<< output[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//total tc = O(n)
// total sc = O(n)
