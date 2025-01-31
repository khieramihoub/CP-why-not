#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
// WA WA333333 
//lazmli nraje3 bitwise operators :/  
// iterate through kol bit then na9As powers of 2 
// then idono 
 int main(){
    KHEIRA WAH
    int t; cin >> t ; 
    while(t--){   
          int x ; cin >> x ; 
          vector<int> wah ; 
          wah.push_back(x) ;
          int res = 0 ; 
          for(int i = 0 ; x > 0 ; ++i) {
            if( x >> i & 1){
              if(x == (1 << i )){
                res = i ; 
                break ; 
              }
              x -= (1 << i) ; 
              wah.push_back(x); 
            }
          }      
          while(res > 0){
            x -=  1 << res -1 ; 
            wah.push_back(x); 
            --res ; 
          }      
          cout << wah.size() << endl ; 
          for(int wi : wah){
            cout << wi << " " ; 
          }
          cout << endl ; 


     }
    //vector<int> wah(n) ; 
    //for(int i = 0 ; i < n ; ++i){
      //cin >> wah[i] ;     }

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
