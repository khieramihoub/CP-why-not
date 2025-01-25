#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
//bdlt template maybe it's better ! 
void solve(){
    int n ; cin >> n ; 
    string s  ; cin >> s ;
    int res = 0 ; 
    vector<long long> prefixaat(n+1 , 0 ) ; 
    long long poww = 1 ; 
    for(int i = n-1 ; i >= 0 ; --i){
        prefixaat[i] = (prefixaat[i+1] + (s[i] - '0') * poww)%11; 
        poww = (poww * 10) % 11 ; 
    }
    unordered_map<int,int> frequency ; 
    frequency[0] = 1 ; 
    for(int i = 0 ; i < n ; ++i){
        res += frequency[prefixaat[i]] ; 
        frequency[prefixaat[i]]++;
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
