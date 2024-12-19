#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);

int main() {
    KHEIRA WAH
    int n ; cin >> n ; 
    vector<int> dp(n+1 , INT_MAX) ; 
    dp[0] = 0 ; 
    for(int i = 1 ; i <= n ; ++i){
      int wah = i ; 
      while(wah > 0){
        int num = wah % 10 ; 
        wah/=10 ; 
        if(num > 0){
            dp[i] = min(dp[i] , dp[i-num]+1);
        }
      }
    }
    cout << dp[n] << endl; 
    return 0;
}
// K     K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
