#include "bits/stdc++.h"
inline static void solve(){
       int cnt = 0,i = 5, n;
       std :: cin >> n;
       while(n / i > 0){
               cnt = cnt  + n/i;
                i = i  * 5;

       }
       std :: cout << cnt;
}
signed main(){
      std :: ios_base :: sync_with_stdio(false);
      std :: cin.tie(0);
      std :: cout.tie(0);
      solve();
      return 0;
}
