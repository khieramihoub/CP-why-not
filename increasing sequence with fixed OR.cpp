#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
    int t ; 
    cin >> t ; 
    while(t--){
        long long  n ; cin >> n ; 
        vector<long long> a ; 
       for (int i = 62; i >= 0; --i) {
            long long x = 1LL << i; 
            if ((x & n) == x && x != n) {
                a.push_back(n - x); 
            }
        }
                a.push_back(n) ; 
        cout << a.size() << endl ; 
        for(long long val : a ){
            cout << val << " " ; 
        }
        cout << '\n' ; 
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


