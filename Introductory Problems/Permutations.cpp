#include "bits/stdc++.h"
inline static void solve(){
        int n;
        std :: cin >> n;
        if(n == 2 or n == 3){
             std :: cout << "NO SOLUTION";
        }else{
            for(int i = 2; i <= n; i = i + 2){
                std :: cout << i << ' ';
            }
            for(int i = 1; i <= n; i = i + 2){
                    std :: cout << i << ' ';
            }
        }
 
}
signed main(){
      std :: ios_base :: sync_with_stdio(false);
      std :: cin.tie(0);
      std :: cout.tie(0);
      solve();
     return  0;
}
