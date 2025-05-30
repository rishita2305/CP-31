// https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);//n
        for(int i=0; i<n ; i++){
            cin >> a[i];
        }
        map<long long, long long> freq_map;
        for(int i =0;i<n;i++){
            freq_map[a[i]]++;
        }
        if(freq_map.size()>=3){
            cout<< "NO" << endl;
        }
        else{
            long long freq_1 = freq_map.begin()->second;
            long long freq_2 = freq_map.rbegin()->second;
            if(freq_1 == freq_2){
                cout<<"YES"<<endl;
            }
            else if (n % 2==1 && abs(freq_1-freq_2)==1){
                cout << "YES"<< endl;
            }
            else{
                cout <<"NO"<< endl;
            }
        }
        
}}
//tc = O(t*n*log(n))
//sc = O(n)
