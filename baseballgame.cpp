class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> natija ; 
        int wah = 0 ; 
        for(const string& operation : operations){
            if(operation == "C"){
            if(!natija.empty()){
                wah-= natija.top(); 
                natija.pop();
            }
          }else if(operation == "D"){
            if(!natija.empty()){
                int last_wah = natija.top();
                natija.push(last_wah * 2) ; 
                wah += last_wah*2;
            }

          }else if(operation == "+"){
            if(natija.size()>= 2){
                int last_wah = natija.top();
                natija.pop(); 
                int zouj_wah = natija.top() ; 
                natija.push(last_wah);
                int wah_wah = last_wah + zouj_wah;
                natija.push(wah_wah);
                wah += wah_wah ; 
            }
          }
          else{
            int ih = stoi(operation) ; 
            natija.push(ih) ; 
            wah+=ih ;
          }
        }
        return wah;
    }
};
