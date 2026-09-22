class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l =0; 
        int r=heights.size()-1;
        int max =0;
        while (r>l){
            int temp=(r-l)*(min(heights[l],heights[r]));
            if (temp>max){
                max=temp;
            }
            if (heights[l]>heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return max;
    }
};
