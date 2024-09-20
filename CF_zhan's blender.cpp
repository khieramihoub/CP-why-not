#include <bits/stdc++.h> 
using namespace std; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int main(){
    KHEIRA WAH 
    long long t ; 
    cin >> t; 
    while(t--){
     long long n , x , y ; 
     cin >> n >> x >> y ; 
     if(n == 0){
        cout << "0" << '\n';
     } 
     else if(x == y) {
        cout << (n+x-1)/x << '\n' ; 
     }
     else if(x < y){
        cout << (n+x-1)/x << '\n' ;
     }
     else if(x>y){
        cout << (n+y-1)/y << '\n' ;
     }
    }
    return 0 ;
}


//   K     K   H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




