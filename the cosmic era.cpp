#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){ 
    ll a  = 1 ; 
    ll b = 2000000000 ; 
    while(a <= b){
        ll mid = a +(b-a)/ 2; 
        cout << mid << endl ; 
        cout << flush ; 
        string s  ; cin >> s ; 
        if(s == "SINKS"){
               a = mid   + 1 ; 
        }else if (s == "FLOATS"){
               b = mid - 1 ; 
        } else{
            break ; 
        }
    }

    
    return 0 ; 
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██╗██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝                                                                              
