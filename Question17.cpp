// https://codeforces.com/problemset/problem/1845/A
#include <iostream>
using namespace std;
int main() {
   int t;
   cin >> t;
   while(t--){
      long long n,k,x;
      cin >> n >> k >> x;
      if(x!=1){
          cout<<"Yes"<<endl;
          cout << n << endl;
          for(int i =1; i<=n; i++){
              cout<< 1<<" ";
          }
          cout<<endl;
      }
      else{
          if(k==1 || (k==2 && n%2 == 1)){
              cout <<"No" <<endl;
          }
          else{
                cout<< "Yes" <<endl;
                if(n % 2 == 0){
                    cout << n/2 << endl;
                     for(int i =1; i<=n/2; i++){
                      cout<< 2<<" ";
                  }
                  cout<<endl;
                }
                else{
                    cout << (n-3)/2 + 1 << endl;
                    for(int i=1; i<=(n-3)/2; i++){
                        cout << 2 <<" ";
                    }
                    cout << 3 << endl;
                }
         }
      }
   }
   return 0;
}
//total tc = O(n)
// total sc = O(1)
