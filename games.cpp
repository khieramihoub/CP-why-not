#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main(){
    KHEIRA WAH
    int n ;
    int count = 0 ; 
     cin >> n ; 
    int g[n] , h[n] ; 
    for (int i = 0 ; i < n ; ++i){
    cin >> g[i] >> h[i] ; 
    }
    for(int i = 0 ; i < n ; ++i){
        for(int j =0 ; j< n ; ++j){
            if(g[i]==h[j]) count++;
                    }
    }
    cout << count << endl; 


   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A

