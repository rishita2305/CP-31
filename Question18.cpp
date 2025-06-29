// https://codeforces.com/problemset/problem/1837/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> x >> k; // input

        if (x % k == 0) // case 2
        {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
        else // case 1
        {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
    return 0;
}
// TC: O(t)
// SC: O(1)
