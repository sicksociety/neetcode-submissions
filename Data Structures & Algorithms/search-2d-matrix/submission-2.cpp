class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col= matrix[0].size();
        int row= matrix.size();
        pair<int,int> l = {0,0};
        pair<int,int> r = {row-1,col-1};
        while (l<=r){
            int lo=l.first*col+l.second;
            int hi=r.first*col+r.second;
            int mid=lo+(hi-lo)/2;
            int ro=mid/col;
            int co=mid%col;
            if (matrix[ro][co]<target){
                l={ro,co+1};
                if (l.second==col) l={ro+1,0};
            }
            else if (matrix[ro][co]>target){
                r={ro,co-1};
                if (r.second<0) r={ro-1,col-1};
            }
            else if (matrix[ro][co]==target){
                return true;
            }
        }
        return false;
    }
};