#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
    string s1 , s2 ; 
    cin >> s1 >> s2 ; 
    for(int i = 0  ; i < s1.size() ; ++i){
        s1[i] = tolower(s1[i]) ; 
        s2[i] = tolower(s2[i]) ; 
    }
    if(s1>s2) {
        cout << "1" << endl ; 
    }
    else if( s2 > s1) {
        cout << "-1" << endl; 
    }
    else{
        cout << "0" << endl;
    }
   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




