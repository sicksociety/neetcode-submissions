class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while (k>0){
            k--;
            int n=nums.size()-1;

            while (n>0){
                swap(nums[n],nums[n-1]);
                n--;
            }

        }
        
    }
};