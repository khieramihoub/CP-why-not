#include<bits/stdc++.h> 
#define kheira ios::sync_with_stdio(false) ; 
#define waah cin.tie(NULL) ; 
typedef long long ll ; 
using namespace std ; 
int main(){
    kheira waah
    int n ; cin >> n ; 
    vector<int> wah(n) ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> wah[i] ; 
    }
    sort(wah.begin(),wah.end()) ; 
    for(auto x : wah){
        cout << x << " " ; 
    }
    cout << endl ; 
    return 0 ; 
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██ ██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝    
