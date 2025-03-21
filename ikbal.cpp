#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define KHEIRA ios::sync_with_stdio(false);
#define WAH cin.tie(nullptr);
const int MOD = 1e9 + 7;
//TLETLETLETLETLE
int main(){
KHEIRA WAH 
int n ; cin >> n ; 
int i = 0 , p = 0 ; 
while(n>0){
int x  = n%10 , counter = 1 ; 
if(x == 7) counter++;
i += counter * floor(pow(2,p));
p ++;
n/=10 ; 
 
}
cout << i << endl ;
    return 0 ; 
}


//  K    K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
