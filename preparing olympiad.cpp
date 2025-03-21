#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
//TLETLETLETLETLE
int main(){
KHEIRA WAH 
int n , l , r  , x ; 
cin >> n >> l >> r >> x ; 
vector<ll> a(n) ; 
for(int i = 0 ; i < n ; ++i){
    cin >> a[i];
}
ll res = 0 ; 
for(int i= 0 ; i < (1<<n) ; ++i ){
 ll s = 0 , mn = INT_MAX , maxx = 0 ; 
   for(int j = 0 ; j < n ; ++j){
        bool ok = i & (1<<j);
        if(ok){
            s += a[j] ;  
            mn = min(mn , a[j]) ; 
            maxx = max(maxx , a[j]) ; 
        }
   }
   if(maxx- mn >= x && s >= l && s <= r )res++; 
} 
cout << res ; 
    return 0 ; 
}

//  K    K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
