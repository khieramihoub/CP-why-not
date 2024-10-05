#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main() {
    KHEIRA WAH
    int n , h ; 
    cin >> n >> h ; 
    int min = 0; 
     for(int i = 0 ; i < n ; ++i){
        int a ; 
        cin >> a  ; 
        if (a > h ){
            min += 2 ; 
        }else{
            min += 1 ; 
        } 
     } 
      cout << min << endl ; 
    return 0;
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A

