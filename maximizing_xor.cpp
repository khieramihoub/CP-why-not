#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha
int main() {
    Algerian OI
    int l , r  ; cin >> l >> r ; 
    int res =0 ; int xorval = l^r ; 
    while(xorval> 0){
         res++ ; 
         xorval >>= 1 ; 
    }
 
    cout << (1 << res) -1  << endl;
    return 0 ; 
}
