#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
    int n , t ; cin >> n >> t ; 
    string s ; cin >> s ; 
    while(t--){
        for(int i = 0 ; i < n - 1; ++i){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i] , s[i+1]) ; 
                i++ ; 
            }
        }
    }
    cout << s << endl ; 
   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A

