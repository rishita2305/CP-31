// https://codeforces.com/problemset/problem/1873/C
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j});
                    sum += ring + 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
//total tc = O(100*t)
// total sc = O(1)
