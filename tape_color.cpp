#include <bits/stdc++.h> 
using namespace std;
#define MOD 1000000007
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL); 
int main(){
  int n ; 
  cin >> n ; 
  if(n== 1){
    cout << "2" ;
    return 0 ;
  }
  if(n==2){
    cout << "3" ; 
    return 0 ;
  }
  vector <int> b(n+1 , 0) , w(n+1 , 0 ) ; 
  b[1] = 1 ; 
  w[1] = 1 ; 
  b[2] = 1 ; 
  w[2] = 2 ; 
  for(int i = 3 ; i <= n ; ++i){
    w[i] = (w[i-1] + b[i-1]) %MOD; 
    b[i] = w[i-1] %MOD; 
  }
  int charit = (b[n]+w[n])%MOD;
  cout << charit << endl ; 
  return 0 ; 
 
}
