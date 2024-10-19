#include <bits/stdc++.h>
using namespace std;
#define KHEIRA ios_base::sync_with_stdio(false);
#define WAH cin.tie(NULL);
//send help do3t f lycée
//inshallah matkounch fake sol
int  main() {
      KHEIRA WAH
    int n, c;
    cin >> n >> c;
    vector<int> t(n);
    
    for(int i = 0; i < n; ++i){
        cin >> t[i];
    }
    
    int count = 1; 
    int last = t[0]; 
    
    for(int i = 1; i < n; ++i){
        if (t[i] - last >= c) {
            count++;
            last = t[i]; 
        }
    }
    cout << count << endl;
    return 0;
}


// K     K     H     H   EEEEE    IIIII     RRRRR         A 
//  K   K      H     H   E          I       R    R      A  A    
//  K K        H     H   E          I       R    R     A    A   
//  KKK        HHHHHHH   EEEEE      I       RRRRR     AAAAAAA
//  K  K       H     H   E          I       R  R     A       A 
//  K   K      H     H   E          I       R   R   A         A
//  K    K     H     H   EEEEE    IIIII     R    R A           A
