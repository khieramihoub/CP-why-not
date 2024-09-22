#include <bits/stdc++.h> 
using namespace std; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  

int main(){
    KHEIRA WAH 
    string n ; 
    cin >> n ; 
     int zhar_numbers = 0 ; 
     for ( char c : n){
        if(c == '4' || c== '7'){
              zhar_numbers++;
        }
     }
     string k = to_string(zhar_numbers) ; 
     if(k.find_first_not_of("47")== string::npos && zhar_numbers >0){
        cout<< "YES" ;
     }
     else{
        cout << "NO";
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




