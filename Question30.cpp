// https://codeforces.com/problemset/problem/1766/A
#include <bits/stdc++.h>
using namespace std;

bool check(long long x)
{
    long long count_of_digits = 0;
    long long count_of_zeroes = 0;
    while (x) {
        if (x % 10 == 0)
            count_of_zeroes++;
        count_of_digits++;
        x /= 10;
    }
    return count_of_zeroes == count_of_digits - 1;
}

int main()
{
    // Precomputing all the round numbers
    vector<long long> round_numbers;
    for (long long i = 1; i <= 9999999; i++) {
        if (check(i) == true)
            round_numbers.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long answer = 0;
        for (int i = 0; i < round_numbers.size(); i++) {
            if (round_numbers[i] <= n)
                answer++;
            else
                break;
        }

        cout << answer << endl;
    }

    return 0;
}


//per test case tc = O(54)
// total tc = O(999999*6 + 54*10^4) = O(10^6)
// total sc = O(54)
