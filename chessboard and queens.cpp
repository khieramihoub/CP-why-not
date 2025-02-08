#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7; 
const int n = 8 ; 
bool row [n], diag[2 * n ], diag2[2* n ] , placé[n][n] ;
long long res ; 
char wah [n][n] ; 
 void solve(int co){
   if(co == n){
      res++ ; 
      return ; 
   }
   for(int r = 0 ; r < n ; ++r){
         if(wah[r][co] == '.' && !diag2[r-co + 7] && !diag[r+co] && !row[r]){
            placé[r][co] = true ; 
            diag2[r-co+7] = diag[r+co] = row[r] = true; 
            solve(co+1) ; 
            placé[r][co] = false ; 
            diag2[r-co+7] = diag[r+co] = row[r] = false; 
         }
   }

 }
 int main(){
    KHEIRA WAH
   for(int i = 0 ; i<n; ++i){
       for(int j = 0 ; j < n; ++j){
         cin >> wah[i][j]; 
       }
   }
   solve(0); 
   cout << res << endl ; 
   return 0 ; 
   
    
}

//  ░▒▓██████▓▒░   ░▒▓██████▓▒░  ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓████████▓▒░ ░▒▓█▓▒░ ░▒▓███████▓▒░   ░▒▓██████▓▒░  
// ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░        ░▒▓█▓▒░ ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░      ░▒▓██▓▒░  ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░    ░▒▓██▓▒░    ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓████████▓▒░ 
// ░▒▓█▓▒░        ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓██▓▒░      ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
// ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░        ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
//  ░▒▓██████▓▒░   ░▒▓██████▓▒░   ░▒▓██████▓▒░  ░▒▓████████▓▒░ ░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ 
//                                                                                                   
