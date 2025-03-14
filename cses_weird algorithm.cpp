#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
#define k 1000000 
//TLETLETLETLETLE
int main(){
    KHEIRA WAH 
   ll n ; cin >> n ; 
   vector<ll> wah ; 
   wah.push_back(n) ; 
   while(n!=1){
    if(n%2 == 0 ){
        n/=2 ; 
    }else{
        n = n*3 +1 ; 
    }
    wah.push_back(n) ;
   }
   for(const auto& i : wah){
    cout << i << " " ; 
   }
   cout << endl ; 
return 0 ; 
}
