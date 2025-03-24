#include<bits/stdc++.h> 
using namespace std ; 
void play() {
   map<char,vector<int>> cards ; 
   vector<pair<int,int>> matching; 
   for(int i = 1 ; i <= 50 ; ++i){
      char l = faceup(i) ; 
      if(cards.find(l)!= cards.end()){
         int prev = cards[l][0];
         matching.push_back({prev, i}) ; 
         faceup(prev) ; 
         faceup(i) ; 
      }else{
         cards[l].push_back(i) ;
      }
   }
}
