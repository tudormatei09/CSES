#include "bits/stdc++.h"
std :: set <int> s;
inline static void solve(){
            int n;
            std :: cin >> n;
            for(int i = 1; i < n; i++){
                        int x;
                       std :: cin >> x;
                       s.insert(x);
            }
            for(int i = 1; i <= n; i++){
                 if(s.find(i) == s.end()){
                      std :: cout << i << ' ';
                      return;
                 }
            }
}
signed main(){
      std :: ios_base :: sync_with_stdio(false);
      std :: cin.tie(0);
      std :: cout.tie(0);
      solve();
      return 0;
}
