#include <bits/stdc++.h> 
using namespace std ; 
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);  
int number_of_floor(int n , int x ){
int zouj = 2 ; 
int floor = 1;
while(zouj < n){
    zouj+= x ; 
    floor++;
}
return floor;
}
int main(){
    KHEIRA WAH
    int t; 
    cin >> t ; 
    while(t--){
        int n , x ; 
        cin >> n >> x ;
        cout << number_of_floor(n,x) << endl ;
    }
     
    return 0 ; 
}
