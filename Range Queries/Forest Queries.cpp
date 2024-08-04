#include "bits/stdc++.h"
#define ll long long int
const int DIM = 1000;
ll mat[DIM+5][DIM+5], sp[DIM+5][DIM+5],n,q;
inline static void query(int i1, int j1, int i2, int j2){
                std :: cout << sp[i2][j2] - sp[i1-1][j2] - sp[i2][j1-1] + sp[i1-1][j1-1] << '\n';
}
inline static void Init(){
            for(int i = 1; i <= n; i++){
                  for(int j = 1; j <= n; j++){
                            sp[i][j] = mat[i][j] + sp[i-1][j] + sp[i][j-1] - sp[i-1][j-1];
                  }
            }
}
inline static void solve(){
        std :: cin >> n >> q;
        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                       char c;
                       std :: cin >> c;
                       if(c == '*'){mat[i][j] = 1;}
                       if(c == '.'){mat[i][j] = 0;} ///inutil dar nu conteaza
                }
        }
        Init();
        while(q --){
              int i1,j1,i2,j2;
              std :: cin >> i1 >> j1 >> i2 >>  j2;
              query(i1,j1,i2,j2);
        }
}
signed main(){
       std :: ios_base :: sync_with_stdio(false);
       std :: cin.tie(0);
       std :: cout.tie(0);
       solve();
      return 0;
}
