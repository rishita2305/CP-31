// https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++){
          cin >> arr[i];
        }
    int ans = abs(arr[0]);
    for (int i = 0; i < N; i++){
        if(arr[i] == 0){
            ans=0; 
            break;
        } 
        else{
            ans = min(ans,abs(0-arr[i]));
        }
    }
    cout << ans;
}
//total tc = O(N)
// total sc = O(N)
