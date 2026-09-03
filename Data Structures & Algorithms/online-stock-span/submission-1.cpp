class StockSpanner {
     stack<pair<int, int>> s;
public:
    StockSpanner() {
        
    }
    int next(int price) {
        int sum = 1;
        while (!s.empty() && price>=s.top().first){
            sum+=s.top().second;
            s.pop();
        }
        s.push(pair(price,sum));
        return sum;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */