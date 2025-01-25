#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
//bdlt template maybe it's better ! 
void solve(){
    int n ; cin >> n ; 
    string s  ; cin >> s ; 
    int res = 0 ; 
    for(long long i = 0 ; i < n ; ++i){
        long long wah = 0 ; 
        for(int j = i ; j < n ; ++j){
            wah = wah*10 +( s[j] - '0' )  ; 
            if(wah % 11 == 0) res++;
        }
    }
    cout << res << endl ; 
}
int main() {
    KHEIRA WAH 
    int t ; cin >> t ; 
    while(t--){
    solve() ; 
    }
    return 0 ; 
}
// KHEIRAAAAAAAAAAAAAA
