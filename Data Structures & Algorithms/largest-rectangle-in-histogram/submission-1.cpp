class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> sol;
        int max=0;
        for (int i=0;i<heights.size();i++){
            if (sol.empty()||(!sol.empty() && heights[i]>=sol.top().second)){
                sol.push(pair{i,heights[i]});
            }
            else{
                int idx=i;
                while(!sol.empty() && sol.top().second>heights[i]){
                    int temp=sol.top().second *(i - sol.top().first); 
                    if (temp>max){
                        max=temp;
                    }
                    idx=sol.top().first;
                    sol.pop();
                    
                }
                sol.push(pair{idx,heights[i]});
            }
        }
        while (!sol.empty()){
            int len= heights.size();
            int temp=sol.top().second *(len - sol.top().first); 
            if (temp>max){
                max=temp;
            }
            sol.pop();

        }
        return max;
        
    }
};
