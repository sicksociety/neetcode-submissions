class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        for (int i = 0; i<nums.size(); i++){
            if (i>0 && nums[i]==nums[i-1]){
                continue;
            }
            else {
                int lo=i+1 ;
                int hi=nums.size()-1;
                while (lo < hi) {
                    int sum = nums[lo] + nums[hi];
                    if (sum == -nums[i]) {
                        sol.push_back({nums[i],nums[lo],nums[hi]});
                        lo++;
                        hi--;
                        while (lo < hi && nums[lo] == nums[lo - 1]) lo++; 
                        while (lo < hi && nums[hi] == nums[hi + 1]) hi--;
                    } else if (sum < -nums[i]) {
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
