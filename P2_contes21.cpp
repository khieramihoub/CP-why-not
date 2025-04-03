#include<bits/stdc++.h> 
#define kheira ios::sync_with_stdio(false) ; 
#define waah cin.tie(NULL) ; 
typedef long long ll ; 
using namespace std ; 
int main(){
    kheira waah
   string s ; cin >> s ; 
   int t = stoi(s.substr(0,2))*60+ stoi(s.substr(3,2)) ; 
   while(true){
    t = (t+1) % (24*60) ; 
    string wah ; 
    wah += to_string(t/60/10) ; 
    wah += to_string(t/60%10) ; 
    wah += ":"  ; 
    wah += to_string(t%60/10) ; 
    wah += to_string(t%60%10) ; 
    string p = wah ; 
    reverse(p.begin(),p.end()) ; 
    if(wah == p){
        cout << wah << endl ; 
        break ; 
    }

   }
    return 0 ; 
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██ ██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝    
