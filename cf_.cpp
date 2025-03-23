#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define AOI ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1) odd += a[i];
        else even += a[i];
    }
    int odd_w = n / 2, even_w = n / 2;
    if (n & 1) even_w++;
 
    if (odd % odd_w != 0 || even % even_w != 0 || odd/odd_w != even/even_w) {
        cout << "NO\n";
        return ;
    }
    cout << "YES\n";
}
int main(){ 
    AOI WAH   
    int t ; cin >> t ; 
    while(t--){
       solve(); 
    } 
    return 0 ; 
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██╗██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝                                                                              
