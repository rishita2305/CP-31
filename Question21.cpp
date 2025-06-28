// https://codeforces.com/problemset/problem/1829/B
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0, i = 0;

        while(i < n) {
            int Zerocount = 0;
            while(i < n && arr[i] == 0) {
                Zerocount++;
                i++;
            }
            count = max(count, Zerocount);
            i++; // move to next element if not already incremented
        }

        cout << count << endl;
    }
    return 0;
}
// TC: O(n*t)
// SC: O(n*t)
