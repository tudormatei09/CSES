#include "bits/stdc++.h"
#pragma GCC optimize("Ofast")
std  :: set < std :: string > sett;
inline static void solve(){
        std :: string s;
        std :: vector <char> v;
        std :: cin >> s;
        std :: sort(s.begin(),s.end());
        for(auto i : s){
             v.push_back(i);
        }
        do{
                std :: string aux;
               for(auto i : v){
                    aux = aux + i;
               }
               sett.insert(aux);
        }while(std :: next_permutation(v.begin(),v.end()));
        std :: cout << sett.size() << '\n';
        for(auto i : sett){
             std :: cout << i << '\n';
        }
}
signed main(){
       std :: ios_base :: sync_with_stdio(false);
       std :: cin.tie(0);
       std :: cout.tie(0);
       solve();
      return 0;
}
