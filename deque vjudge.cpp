#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
//wa3333333333333
int main() {
    KHEIRA WAH 
    int  q;
    cin >> q;
    deque<int> wah;
    while(q--){
         int wi  ; cin >> wi ; 
         if(wi == 0 ){
            int  d, x ; 
            cin >> d >> x ;
            if(d == 0){ 
            wah.push_front(x);
         }else{
            wah.push_back(x);
         }
         }
      else if(wi == 1){
        int p ; cin >> p ; 
        cout << wah[p] << endl ; 
    }else if( wi == 2 ){
        int d ; cin >> d ; 
        if(d== 0){
            wah.pop_front(); 
        }
    else{
        wah.pop_back();
    }
    }
    }
    return 0 ; 
}
// K     K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
