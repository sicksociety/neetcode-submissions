class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> sol;
        for (int j=0;j<nums.size();j++){
            if (j>0 && nums[j]==nums[j-1]){
                continue;
            }
            for (int i = j+1; i<nums.size(); i++){
                if (i>j+1 && nums[i]==nums[i-1]){
                    continue;
                }
                    
                int lo=i+1 ;
                int hi=nums.size()-1;
                while (lo < hi) {
                    long long sum = (long long )nums[lo] + nums[hi]+nums[i]+nums[j];
                    if (sum == target) {
                        sol.push_back({nums[i],nums[lo],nums[hi],nums[j]});
                        lo++;
                        hi--;
                        while (lo < hi && nums[lo] == nums[lo - 1]) lo++; 
                        while (lo < hi && nums[hi] == nums[hi + 1]) hi--;
                    } else if (sum < target) {
                        lo++;
                    } else {
                        hi--;
                    }
                }
            }

        }
        return sol;
        
    }
};