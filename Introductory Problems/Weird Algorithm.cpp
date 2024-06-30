#include "bits/stdc++.h"
inline static void solve(){
        long long int n;
        std :: cin >> n;
        std :: cout << n << ' ';
        while(n != 1){
            if(n % 2 != 0){
               n = n * 3 + 1;
               std :: cout << n << ' ';
            }else if(n % 2 == 0){
                n  = n / 2;
                std :: cout << n << ' ';
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

