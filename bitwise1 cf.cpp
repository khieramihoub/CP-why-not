#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
// mocha and maths cf  prblm
int main() {
   KHEIRA WAH 
   int t ; 
   cin >> t ; 
   while(t--){
    int n ; 
    cin >> n ; 
    vector<int> a(n) ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i] ;
    }
    int x = a[0] ; 
    for(int i = 0 ;  i < n ; ++i) {
        x &= a[i] ;
    }
    cout << x << endl;
   }
    return 0;
}
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A



