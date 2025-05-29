// https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool three = false;
        int dot_count = 0;
        for(int i =0; i<n ; i++){
            if(s[i]=='.' && s[i+1] == '.' && s[i+2] == '.'){
                three = true;
                break;
            }
            if(s[i]=='.'){
                dot_count++;
            }
        }
        if(three){
            cout <<"2"<<endl;
        }
        else{
            cout << dot_count <<endl;
        }
        }
}
//TC: O(tn)
//SC: O(n)
