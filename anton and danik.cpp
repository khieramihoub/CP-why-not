#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
    int n ; cin >> n ; 
    string s ; cin >> s; 
    int d = 0 ; int a = 0 ; 
    for(char c :  s){
        if(c=='A') a++ ; 
        else if(c == 'D') d++;
    }
    if(a>d){cout << "Anton" << endl;}
    else if(d>a){cout << "Danik" << endl;}
    else{cout << "Friendship" << endl; }
    return 0 ; 
    
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




