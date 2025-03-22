#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
//tletletletle
vector<bool> wah(int n) {
    vector<bool> is(n + 1, true);
    is[0] = is[1] = false;
    for (int p = 2; p * p <= n; ++p) {
        if (is[p]) {
            for (int i = p * p; i <= n; i += p) {
                is[i] = false;
            }
        }
    }
    return is;
}
int main() {
    KHEIRA WAH 
    int n, q;
    cin >> n >> q;
    vector<bool> is = wah(n);
    cout << count(is.begin(), is.end(), true) << endl;
    while (q--) {
        int x;
        cin >> x;
        cout << (is[x] ? "1\n" : "0\n");
    }
    
    return 0;
}


//  K    K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
