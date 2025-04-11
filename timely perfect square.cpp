#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
//wah
void solve(){
    ll n ; cin >> n ; 
    ll res = 0 ; 
    if(n%2 == 0 ){
        cout << "2025" << string(n-4, '0') << endl;
    }else{
        cout << "42025" << string(n-5 , '0') << endl ; 
    }

}


int main() {
    int T;
    cin >> T;

    while (T--) {
        solve() ; 
    }

    return 0;
}

//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██ ██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝    
