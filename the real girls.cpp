#include <bits/stdc++.h> 
using namespace std; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  

int main(){
    KHEIRA WAH 
    int n ; cin >> n ;
    unordered_map<long long , int> possible; 
    for(int i = 0 ; i < n ;  ++i){
          long long a , b ; 
          cin >> a >> b ; 
          long long forward = a+b ; 
          long long backward = a-b;
          possible[forward]++;
          possible[backward]++;
    }
    int toul_te3_towers = 0 ; 
    for(const auto& entry : possible){
        if ( entry.second> toul_te3_towers){
            toul_te3_towers = entry.second;
        }
    }
    cout << toul_te3_towers ; 
    return 0 ;

}

//   K     K   H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




