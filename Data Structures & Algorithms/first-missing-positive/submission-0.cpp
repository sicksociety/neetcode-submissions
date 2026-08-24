class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int& i : nums ){
            if (i<0 || i > nums.size()){
                i=0;
            }
        }
        for (int i=0 ; i <nums.size(); i++){
            int x=abs(nums[i]);
            if (x!=0 && x <nums.size()+1){
                int j=nums[x-1];
                if(j==0){
                    nums[x-1]= (nums.size()+1) * -1;
                }
                else if (j>0){
                    nums[x-1]*= -1;
                }
            }
        }
        for (int i=1 ; i <nums.size()+1; i++){
            if ((nums[i-1]>=0)){
                return i; 
            }
            
        }
        return (nums.size()+1);
        
    }

};