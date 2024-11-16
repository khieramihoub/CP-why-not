#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Algerian ios::sync_with_stdio(false);
#define OI cin.tie(nullptr);
//template te3 red1 khwntha
int main() {
    Algerian OI
    int n  , m ; cin >> n >> m ; 
    int max_and =0 ; int max_or = 0 ; int  max_xor = 0; 
    for(int i = 1 ; i < n ; ++i){
        for(int j = i+1 ; j<= n ; ++j){
            int and_val = i&j ; 
            int or_val  = i|j ; 
            int xor_val = i^j ; 
            if(and_val < m) max_and=max(max_and,and_val) ; 
            if(or_val < m) max_or = max(max_or,or_val);
            if(xor_val<m) max_xor = max(max_xor,xor_val) ; 
        }
        
    }
    cout << max_and << '\n';
        cout << max_or << '\n'; 
        cout << max_xor << '\n';
    return 0 ; 
}

