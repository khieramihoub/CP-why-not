#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int main(){
  KHEIRA WAH 
  string s; 
  cin >> s ; 
  vector<int> keys(26) ; 
  for(int i = 0 ; i <26 ; ++i) {
    keys[s[i] - 'A'] = i + 1;
  }
  int massafa = 0 ;
  for(char j = 'A' ; j < 'Z' ; ++j){
    massafa += abs(keys[j - 'A']  - keys[j+1 - 'A']) ; 
  }
  cout << massafa ; 
  return 0 ; 
}
//  K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




