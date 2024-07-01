#include "bits/stdc++.h"
const int MOD = 1e9+7;
#define ll long long int
inline static ll fast_exp(ll x, ll y){
            ll res = 1;
            while(y > 0){
                if(y % 2 == 1)
                    res =  (res * x ) %MOD;
                y  = y >> 1;
                x = ( x * x) %MOD;
            }
        return res%MOD;
}
inline static void solve(){
          int n;
          std :: cin >> n;
          std :: cout << fast_exp(2,n)%MOD;
}
signed main(){
       std :: ios_base :: sync_with_stdio(false);
       std :: cin.tie(0);
       std :: cout.tie(0);
       solve();
       return 0;
}
