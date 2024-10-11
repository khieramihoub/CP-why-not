#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main(){
    KHEIRA WAH
    int n ; cin >> n ;  
    vector<int> a(n) ; 
    for(int i = 0 ; i< n ; ++i){
        cin >> a[i] ; 
    } 
       int count = 0 ;
       int police = 0 ; 
       for(int i = 0 ; i < n ; ++i){
       if(a[i] == -1){
        if(police > 0) {
            police--;
        }
        else{
            count++;
        }
       }
       else{
        police += a[i] ; 
       }
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




