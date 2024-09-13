#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL); 
int min_cost(int n , int x , int y , const vector<int>&t){
    int total_cost = 0 ; 
    for(int i  = 0 ; i < n ; ++i){
        int single_trip = t[i] * x ; 
        int day_pass =  y ; 
        int minimum =  min (single_trip , day_pass) ; 
        total_cost += minimum ;

    }
return total_cost;

}
int main(){
    KHEIRA WAH
    int n , x , y;
    cin >> n >> x >> y ;
    vector<int> t(n) ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> t[i];
       }       
 cout << min_cost(n,x,y,t) << endl;
    return 0;
}
