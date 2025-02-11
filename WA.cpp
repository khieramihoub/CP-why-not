#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);

const int TEMPERATURE = 200005; 
int main() {
   KHEIRA WAH
    int n , m , k ; 
    cin >> n >> m >> k ; 
    vector<long long> wah(n+1) ; 
    for(int i = 0  ; i < n ; ++i){
      cin >> wah[i] ; 
    }
    vector<tuple<int,int , long long>> opp(m+1)  ; 
    for(int i = 1 ; i < k ; ++i){
      int l , r ; 
      long long d ; 
      cin >> l >> r >> d ; 
      opp[i] = {l,r,d} ; 
    }
    vector<long long> op_diff(m+2 , 0 ) ; 
    for(int i = 0 ; i  <= m; ++i){
      int x , y ; 
      cin >> x >> y ; 
      op_diff[x]++;
      op_diff[y+1]--;

    }
    vector<long long> op_freq(m+1 , 0) ; 
    long long sum = 0 ; 
    for(int i = 1 ; i <= m ; ++i){
      sum+= op_diff[i] ; 
      op_freq[i] = sum ; 
    }
    vector<long long> wah_diff(n+2 , 0 ) ; 
    for(int i = 1 ; i <= m ; ++i){
      auto[l,r,d] = opp[i] ; 
      wah_diff[l] += op_freq[i] * d ; 
      wah_diff[r+1] -= op_freq[i] * d ;
    }
    vector<long long> res(n+1) ; 
    long long wi = 0 ; 
    for(int i = 1 ;i <= n ; ++i){
      wi += wah_diff[i] ; 
      res[i] = wah[i] + wi ; 
    }
    for(int i= 0 ; i < k ; ++i){
      int num ; cin >> num ; 
      cout << res[num] << endl ; 
    }
    return 0;
   }
//  ░▒▓██████▓▒░   ░▒▓██████▓▒░  ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓████████▓▒░ ░▒▓█▓▒░ ░▒▓███████▓▒░   ░▒▓██████▓▒░  
// ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░        ░▒▓█▓▒░ ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓██▓▒░  ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░    ░▒▓██▓▒░    ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓████████▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓██▓▒░      ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░        ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
//  ░▒▓██████▓▒░   ░▒▓██████▓▒░   ░▒▓██████▓▒░  ░▒▓████████▓▒░ ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
//                                                                                                   
