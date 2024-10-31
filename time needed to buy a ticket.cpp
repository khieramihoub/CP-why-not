class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<pair<int,int >> q ; 
       for(int i = 0 ; i <  tickets.size() ; ++i){
          q.push({i,tickets[i]}) ; 
       }    
       int wa9t = 0 ; 
       while(!q.empty()){
        auto[index,count] = q.front(); 
        q.pop(); 
        if(count>0){
            wa9t++;
            if(count - 1 > 0 ){
                q.push({index , count-1}) ; 
            }
            if(index == k && count == 1){
                return wa9t ; 
            }
         }

       }
       return wa9t;
    }
};
