#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const ll MOD = 1e9 + 7;
//TLETLETLETLETLE

ll power(ll b , ll e){
    ll res = 1 ; 
    b %= MOD ; 
    while(e>0){
        if(e%2 == 1) res = (b*res) %MOD ; 
        b = (b*b)%MOD ; 
        e /= 2 ; 
    }
    return res ; 
} 
ll inverser(ll x){
    return power(x , MOD-2) ; 
} 
ll c(ll n , ll k , vector<ll>&F){
    if(k < 0 || k > n ) return 0 ; 
    ll num = F[n] ; 
    ll denum = (F[k] * F[n-k])%MOD ; 
    return (num * inverser(denum)) % MOD ; 
} 

int main(){
    KHEIRA WAH 
    ll n , m ; cin >> n >> m ; 
    vector<ll> F(n+m) ; 
    F[0] = 1 ; 
    for(int i = 1 ; i <= n + m ; ++i){
        F[i] = (F[i-1] * i )%MOD ; 
    }
    cout << c(n+m -1 , m , F) << endl ;
    return 0 ; 
}
