#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
   ios::sync_with_stdio(false) ; 
   cin.tie(NULL) ; 
   int n , a , b ; 
   while(cin >> n && n!= 0){
      cin >> a >> b ; 
    unordered_map<int,int> soliders ; 
     int curr = 0 ; 
     int el = 0; 
      while(true){
         soliders[curr]++; 
         if(soliders[curr] == 2){
            el++; 
         }else if(soliders[curr] == 3){
            break ; 
         }
         ll next = ((ll)a * curr % n * curr % n + b) % n;
         curr = (int)next;

      }
      cout << n-el << endl ; 
   }
   
return 0 ; 
}
//  █████╗  ██████╗ ██╗
// ██╔══██╗██╔═══██ ██║
// ███████║██║   ██║██║
// ██╔══██║██║   ██║██║
// ██║  ██║╚██████╔╝██║
// ╚═╝  ╚═╝ ╚═════╝ ╚═╝                                                                             
