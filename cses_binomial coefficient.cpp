#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
const int MAXN = 1e6 ; 
ll fac[MAXN+1] ; 
ll inv[MAXN+1] ; 
//TLETLETLETLETLE
ll e(ll x , ll n , ll m){
    x%= m ; 
    ll res = 1 ; 
    while(n >0){
        if(n%2 == 1){
            res = res * x % m ; 
        }
        x = x * x %  m ; 
        n/= 2 ; 
    }
    return res ; 
} 
void f(){
    fac[0] = 1 ; 
    for(int i = 1 ; i <= MAXN ; ++i ){
        fac[i] = (fac[i-1] * i )% MOD ; 
    }
}
void inverser(){
    inv[MAXN] = e(fac[MAXN] , MOD -2 , MOD) ; 
    for(int i = MAXN ; i >= 1 ; --i){
        inv[i-1] = inv[i] * i %MOD ; 
    }
}
ll c(int n , int r){
    return fac[n] * inv[r]%MOD  * inv[n-r] % MOD ; 
} 
int main(){
    KHEIRA WAH 
    f() ; 
    inverser() ; 
    int n ; cin >> n ; 
    for(int i = 0 ; i < n ; ++i){
        int a , b ; cin >> a >>b ; 
        cout << c(a,b) << endl ; 
    }
    return 0 ; 
}
//  K    K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
