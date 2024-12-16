#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int main(){
    KHEIRA WAH
    int n ;
    cin >> n ; 
    set<int> distinctnumbers ; 
    for(int i = 0 ; i < n ; ++i){
            int x ; 
            cin >> x ; 
            distinctnumbers.insert(x);  
             }
             cout << distinctnumbers.size(); 
             return 0 ; 
