#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main(){
    KHEIRA WAH
    string s ; cin >> s ; 
    int count = 0 ; 
    int start = 0 ; 
    for(int i = 0 ; i < s.size() ; ++i ){
        int a = s[i] - 'a' ; 
        int walk = abs(start - a) ; 
        if(walk < 13){
            count += walk ;
        }
        else{
            count+= 26 - walk;
        }
        start = a ; 
           }

   
    cout << count << endl ; 
   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




