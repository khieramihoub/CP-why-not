#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int main(){
  KHEIRA WAH 
  string arr[12] ; 
  for(int i = 0 ; i<12; ++i){
    cin >> arr[i] ; 
  }
  int indx = 0 ; 
  for (int i = 0 ; i < 12 ; ++ i){
    if(arr[i].size() == (i+1)) {indx++;} 
  }
  cout << indx ; 
  return 0 ; 
}
//  K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




