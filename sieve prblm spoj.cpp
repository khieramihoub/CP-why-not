#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
const int MAX_N = 10000000 ; 
vector<bool> is(MAX_N + 1, true);
vector<int> cnt(MAX_N + 1, 0);
//tletletletle
void wah(){
    is[0] = is[1] = false;
    for (int i = 2; i * i <= MAX_N; ++i) {
        if (is[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                is[j] = false;
            }
        }
    }
}
void wee(){
    wah() ; 
    for (int x = 0; x * x <= MAX_N; ++x) {
        int buf = x * x;
        for (int y = 0; y * y * y * y <= MAX_N; ++y) {
            int puf = y * y * y * y;
            int m = buf + puf;
            if (m <= MAX_N && is[m]) {
                cnt[m] = 1;
            }
        }
    }
    for (int i = 1; i <= MAX_N; ++i) {
        cnt[i] += cnt[i - 1];
    }
}
int main() {
    KHEIRA WAH 
    wee(); 
    int t ; cin >> t ; 
    while(t--){
        int n ; cin >> n ; 
        cout << cnt[n] << endl ; 
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
