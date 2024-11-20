#include <bits/stdc++.h>
using namespace std;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
#define MOD 1000000007
//template te3 red1 khwntha 

int main(){
    Algerian OI 
    int n ; cin >> n ; 
    vector<int> dp(n+1 , 0) ; 
    dp[0]= 1 ; 
    for(int i = 1 ; i <= n ; ++i){
       for(int j = 1 ; j <= 6 ; ++j){
         if(i-j >= 0)dp[i] = (dp[i]+dp[i-j]) % MOD;
       } 
    }
    cout << dp[n] << endl ; 
    return 0 ; 
}
