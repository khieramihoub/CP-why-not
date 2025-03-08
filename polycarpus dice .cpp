#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
#define k 1000000 
//TLETLETLETLETLE
ll sum = 0;  
int main() {
    KHEIRA WAH
    ll n , a ; cin >> n >> a ; 
    vector<ll> wah(n) ; 
    for(ll i = 0 ; i < n ; ++i) {
        cin >> wah[i] ; 
        sum += wah[i] ; 
    }
    for(ll i = 0 ; i < n ; ++i){
        ll n1 = max(1LL , a-(sum-wah[i])) ;
        ll n2 = min(wah[i] , a -( n-1)) ; 
        ll res = wah[i] - max(0LL, n2 - n1 + 1); 
        cout << res << endl ; 
    }
    return 0;
}
