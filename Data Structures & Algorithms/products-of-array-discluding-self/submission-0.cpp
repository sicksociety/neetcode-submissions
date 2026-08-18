class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>sol(nums.size(),0);
        int product=1;
        int zero=0;
        for (int i : nums){
            if (i==0){
                zero++;
            }
            else {
                product*=i ; 
            }
        }
        if (zero>1){
            return sol;
        }
        else if(zero==1){
            auto it =std::find(nums.begin(),nums.end(),0);
            auto index = std::distance(nums.begin(), it);
            sol[index]=product;
            
        }
        else{
        for(int i =0; i<nums.size();i++){
        
            sol[i]=(product/nums[i]);
        }

        }
        return sol;

    }
};
