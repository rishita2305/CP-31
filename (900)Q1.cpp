// https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;
int dx[4] ={-1,1,-1,1} , dy[4]={-1,-1,1,1};
int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        long long x_king, y_king;
        cin >> x_king >> y_king;
        long long x_queen, y_queen;
        cin >> x_queen >> y_queen;
        
        set<pair<int,int>> king_hits, queen_hits;//8 space
        
        for(int j=0; j<4; j++){//4
            king_hits.insert({x_king + dx[j]*a, y_king + dy[j]*b});//log2(8)
            king_hits.insert({x_king + dx[j]*b, y_king + dy[j]*a});
            
            queen_hits.insert({x_queen + dx[j]*a, y_queen + dy[j]*b});
            queen_hits.insert({x_queen + dx[j]*b, y_queen + dy[j]*a});
        }
        int ans=0;
        for(auto position: king_hits){
            if(queen_hits.find(position) != queen_hits.end()){//log2(8)
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// total tc = O(4*log2(8))=O(24)
// total sc = O(8)
