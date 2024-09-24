#include <bits/stdc++.h> 
using namespace std;
#define MOD 1000000007
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL); 
int main(){
  int n , k ; 
  cin >> n >> k; 
  vector <int> b(n+1 , 0) , w(n+1 , 0 ) ; 
  w[0] = 1 ; 
  int total_w = w[0] ; 
  for(int i = 1 ; i <= n ; ++i){
    w[i] = (w[i-1] + b[i-1]) %MOD; 
    if(k<=i){
        b[i] = total_w;
    }
    else{
         b[i] = (total_w - w[i-k-1]) %MOD;
    }  
    total_w = (total_w+w[i])%MOD;
  }
  int charit = (b[n]+w[n])%MOD;
  cout << charit << endl ; 
  return 0 ; 
}
//  K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
