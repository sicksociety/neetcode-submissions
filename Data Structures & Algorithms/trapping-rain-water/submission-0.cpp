class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        vector<int> max_left;
        vector<int> max_right(n);
        int max =0;
        for(int i=0;i<height.size();i++){
            max_left.push_back(max);
            if (height[i]>max){
                max=height[i];
            }
        }
        max=0;
        for(int i =height.size()-1;i>0;i--){
            max_right[i]=max;
            if (height[i]>max){
                max=height[i];
            }
        }
        int sum =0;
        for(int i=0;i<height.size();i++){
            int temp=min(max_left[i],max_right[i])-height[i];
            if (temp>0){
                sum+=temp;
            }
        }
        return sum;
    }
};