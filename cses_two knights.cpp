#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const ll MOD = 1e9 + 7;
//TLETLETLETLETLE
ll wah(int i ){
    ll ways = ((ll)i *i * (i * i -1))/ 2 ; 
    ll attaques = 4* (i-1) * (i-2) ; 
    ll res = abs(ways - attaques ); 
    return res ; 
}
int main(){
    KHEIRA WAH 
    int n ; cin >> n ; 
    for(int i = 1 ; i <= n ; ++i){
        cout << wah(i) << " " << endl ; 
    }
    return 0 ; 
}
