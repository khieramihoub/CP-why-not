#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
   int x ;
   int wah = 0  ; 
   for(int i = 1 ; i <= 5 ; ++i) {
    for (int j = 1 ; j <= 5 ; ++j){
        cin >> x ; 
        if(x == 1) { 
            wah += abs(i - 3 ) + abs(j-3) ; 
            break;
        }
    }
   }
   cout << wah << endl ; 
   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A

