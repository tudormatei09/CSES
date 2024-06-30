#include "bits/stdc++.h"
#define ll long long int
std :: vector <int> v;
inline static void solve(){
        ll n,p = 0;
        std :: cin >> n;
        for(int i = 0; i < n; i++){
                int x;
                std :: cin >> x;
                v.push_back(x);
        }
        for(int i = 0; i < n; i++){
               if(v[i] < v[i-1]){
                    p = p + std :: abs(v[i]-v[i-1]);
                    std :: swap(v[i],v[i-1]);
                }
        }
        std :: cout << p;
}
signed main(){
      std :: ios_base :: sync_with_stdio(false);
      std :: cin.tie(0);
      std :: cout.tie(0);
        solve();
      return 0;
}
