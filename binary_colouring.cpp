#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
    int t; 
    cin >> t; 
    while (t--) {
        long long x;  
        cin >> x;
        vector<int> a(32 , 0); 
        for(int i = 0 ; i < 32 ; ++i){
            if(x & 1) {
                if(a[i]){
                    a[i+1] = 1 ; a[i] = 0 ;
                }
                else if(i > 0 && a[i-1] == 1){
                    a[i+1] = 1 ; a[i-1] = -1 ; 
                }
                else{
                    a[i] = 1 ; 
                }
            } 
            x >>= 1 ;
        }
        cout << 32 << '\n' ; 
        for(int val : a){
            cout << val << " " ; 
        }
        cout << '\n';
    }
    
    return 0;
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




