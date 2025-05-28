// https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        int n , x;
        cin >> n >> x;
        vector<int> arr(n+2);
        arr[0]=0;
        arr[n+1]= x;
        for(int i=0 ; i<n ; i++){. //n
            cin>> arr[i+1];
        }
        vector<int> difference(n+1);
        int maximum = 0;
        for(int i =0; i <=n; i++){ //n
            if(i==n){
                difference[i]=(arr[i+1]-arr[i])*2;
            }
            else{
                difference[i]= arr[i+1]-arr[i];
            }
            maximum = max(difference[i],maximum);
        }
        cout<< maximum <<endl;
    }
    return 0;
}
//total tc = O(a*n)
// total sc = O(n)
