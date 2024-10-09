#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
const int MOD = 1e9 + 7;
int main(){
    KHEIRA WAH
    int n ; cin >> n ; 
    vector<int> cards(n) ; 
    for(int i =0 ; i < n ; ++i){
        cin >> cards[i] ; 
    }
    int sajya = 0 ; int dima = 0 ; 
    int left = 0 ; int right = n-1 ; 
    bool turn = true ; 
    while(left <= right){
        if(cards[left] > cards[right]){
            if(turn){
                sajya += cards[left] ;
            }
            else{
                dima += cards[left] ; 
            }
            left++;
        }
        else{
            if(turn){
            sajya += cards[right] ; 
            }
            else{
                dima+= cards[right] ; 
            }
            right--;
        }
 turn = !turn ; 
    }
cout << sajya << " " << dima << endl ; 
   return 0 ; 
}

 
// K     K    H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A



