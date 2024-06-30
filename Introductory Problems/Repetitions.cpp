#include "bits/stdc++.h"
std :: set <int> s;
inline static void solve(){
           std :: string str;
           std :: cin >> str;
           int maxx = 1;
           for(int i = 0; i < str.length()-1; i++){
                     if(str[i] == str[i+1]){
                            int j = i;
                            while(str[j] == str[j+1] and j <= str.length()){
                                j ++;
                                maxx = std :: max(maxx, j-i+1);
                            }
                             i = j;
                     }
           }
           std :: cout << maxx;
}
signed main(){
      std :: ios_base :: sync_with_stdio(false);
      std :: cin.tie(0);
      std :: cout.tie(0);
      solve();
      return 0;
}
