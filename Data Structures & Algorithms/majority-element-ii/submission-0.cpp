class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int val=nums.size()/3;
        unordered_map<int,int>mp;
        for (int num:nums){
            mp[num]++;
        }
        vector<int> sol;
        for (auto& x:mp){
            if (x.second>val){
                sol.push_back(x.first);
            }
        }
        return sol;
    }
};