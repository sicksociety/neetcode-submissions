class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto i : mpp) {
            pq.push({i.second, i.first});
        }
        vector<int> sol;
        while(k>0){
            auto cur=pq.top();

            sol.push_back(cur.second);
            k--;
            pq.pop();
        }
        return sol ; 



        
        
    }
};
