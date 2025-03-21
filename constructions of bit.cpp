#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
//TLETLETLETLETLE
int main(){
KHEIRA WAH 
int t ; cin >> t ; 
while(t--){
    int n , k ; cin >> n >> k ;  
    if(n>1){
     int x = log2(k) ; 
     int y =( 1 <<x)-1 ; 
      cout << y << " " ; 
    for(int i = 1; i < n- 1 ; ++i) {
        cout << 0  << " "; 
    }
    cout << k-y<< " " ; 
    cout << endl ; 
}else{
    cout <<k<< endl ; 

}
}
    return 0 ; 
}

//  K    K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
