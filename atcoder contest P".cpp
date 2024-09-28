#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int main(){
  KHEIRA WAH 
  int n ; 
  cin >> n ; 
  vector<int>  A(n) , B(n) ; 
  for (int i = 0 ; i < n ; ++i){
    cin >> A[i] ; 
  } 
  for(int i = 0 ; i < n ; ++i ){
    cin >> B[i] ; 
  } 
  int maxA = *max_element(A.begin(), A.end()) ; 
  int maxB = *max_element(B.begin() , B.end()) ; 
  cout << maxA + maxB ; 
  return 0 ; 
}
//  K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A




