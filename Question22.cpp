// https://codeforces.com/problemset/problem/1814/A
#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        if((n-k)%2 == 0 || n%2 ==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}

//total tc = O(1)
// total sc = O(1)
