class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for (int i = 0; i < position.size(); i++) {
            v.push_back({position[i], speed[i]});
        }
        sort(v.rbegin(), v.rend());
        stack<double> sol;
        for (auto & p :v){
            double temp =double((target-p.first))/p.second;
            if(!sol.empty() && temp<=sol.top()){
                continue;
            }
            else {
                sol.push(temp);
            }
        }
        return sol.size();
       


        
    }
};
