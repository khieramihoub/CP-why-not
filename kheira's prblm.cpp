#include <bits/stdc++.h> 
using namespace std; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
long long i_j_val(int i, int j) {
    return abs(i - j) + 1;
}
long long subg_sum(int i, int j, int n) {
    long long total = 0;
    for (int x = i; x < i + n; ++x) {
        for (int y = j; y < j + n; ++y) {
            total = (total + i_j_val(x, y)) % MOD;
        }
    }
    return total;
}

int main() {
    KHEIRA WAH
    int t; 
    cin >> t; 
    while (t--) {
        int i, j, n;
        cin >> i >> j >> n;  
        cout << subg_sum(i, j, n) << endl;  
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




