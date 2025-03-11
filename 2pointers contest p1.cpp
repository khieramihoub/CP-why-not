#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> wah(n) ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> wah[i] ; 
          }
          reverse(wah.begin(), wah.end()) ; 
          for(int i = 0 ; i < n ; ++i){
            cout << wah[i] << (i==n-1? "" : " ") ; 
          } 
          cout << endl ; 
          return 0 ; 

}
