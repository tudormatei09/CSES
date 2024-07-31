#include "bits/stdc++.h"
#define ll long long int
const int MOD = 1000000007;
const int DIM = 1000005;
ll dp[DIM];
inline static void precompute(){
        dp[0] = 1;
        for(int i = 1; i <= DIM-5; i++){
                for(int j = 1; j <= 6; j++){
                        if(i >= j){
                            dp[i] = (dp[i] + dp[i-j])%MOD;
                        }
                }
        }
}
inline static void solve(){
        precompute();
        int n;
        std :: cin >> n;
        std :: cout << dp[n];
}
signed main(){
     std :: ios_base :: sync_with_stdio(false);
     std :: cin.tie(0);
     std :: cout.tie(0);
     solve();
     return 0;
}
