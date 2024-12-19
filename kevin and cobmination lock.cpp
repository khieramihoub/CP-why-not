#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
bool wah(long long x){
    if (x % 33 == 0) return true;

    string s = to_string(x);
    while (s.find("33") != string::npos) {
        size_t pos = s.find("33");
        s.erase(pos, 2); 
        if (s.empty()) return true;
        x = stoll(s);
        if (x % 33 == 0) return true;
    }
    return false;
}
int main (){
    KHEIRA WAH
    int t ; cin >> t ; 
    while(t--){
         long long x ; cin >> x ; 
         if(wah(x)){
            cout << "YES\n" ; 
         }else{
            cout << "NO\n";
         }
    }
    return 0;
    }

// K     K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
