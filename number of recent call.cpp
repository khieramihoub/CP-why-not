class RecentCounter {
public:
     queue<int> q ; 
    RecentCounter() {
        // wili awili 
    }

    int ping(int t) {
     q.push(t); 
     while(!q.empty() && q.front() < (t- 3000)) {
        q.pop(); 
     }
    return q.size();

    }
};

