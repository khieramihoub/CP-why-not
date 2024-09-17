#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int main(){
    int n ; 
    cin >> n ; 
    vector <pair<int,int>> mostatil(n);
    for(int i = 0 ; i < n ; ++i) {
       int toul , ard ; 
       cin >> toul >> ard ; 
       mostatil[i] = make_pair(toul,ard) ; 
    }
    int misaha_kbira = 0;
    for(int i = 0 ; i < n ; ++i){
        int misaha = mostatil[i].first * mostatil[i].second ; 
        misaha_kbira = max( misaha_kbira , misaha);

    }
    cout << misaha_kbira << endl ; 
    return 0 ; 

}
