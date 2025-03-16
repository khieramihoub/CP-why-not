#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const ll MOD = 1e9 + 7;
//TLETLETLETLETLE
int solve(ll n , ll m,map<pair<ll,ll> , ll>& memo ){
    if (n == 1) {
        return 1;
    }
    if (m == 0) {
        return 1;
    }
    if(memo.find({n,m}) != memo.end()){
        return memo[{n,m}] ; 
    }
    ll res = 0 ; 
    for(int i = 0 ; i <= m ;  ++i){
        res =(res+solve(n-1,m-i,memo))%MOD ; 
    }
    memo[{n,m}] = res ; 
    return res ; 
}
int main(){
    KHEIRA WAH 
    ll n , m ; cin >> n >> m ; 
    map<pair<ll,ll> , ll > memo ; 
    cout<<solve(n,m,memo) << endl ;  
return 0 ; 
}
