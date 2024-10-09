#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main(){
    KHEIRA WAH
    string a ; 
    cin >> a ; 
    int l = 0 ; 
    int u = 0 ;
    for (int i = 0 ; i < a.size() ; ++i) {
        if(islower(a[i])) l++; 
        else{
        u++;
        }}
    if(u>l){
        for(int i = 0  ; i < a.size() ; ++i){
    a[i] = toupper(a[i]) ; }
    }
    else{
        for(int i = 0 ; i < a.size() ; ++i){
            a[i] = tolower(a[i]) ; 
        }
    }
    cout << a << endl ;
   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A



