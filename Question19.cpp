// https://codeforces.com/problemset/problem/1834/A
#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long arr[n];
        for(long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long positive_count = 0;
        long long negative_count = 0;
        
        for(long long i = 0; i < n; i++){
            if(arr[i]==1){
                positive_count++;
            }
            else{
                negative_count++;
            }
        }
        long long ops = 0;
        while(positive_count < negative_count || negative_count % 2 == 1){
            ops++; // i have converted a -1 to 1
            negative_count--;
            positive_count++;
        }
        cout << ops <<endl;
    }
    return 0;
}

//total tc = O(n)
// total sc = O(n)
