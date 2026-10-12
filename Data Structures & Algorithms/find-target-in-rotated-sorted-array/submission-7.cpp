class Solution {
public:
    int search(vector<int>& nums, int target, int l , int r) {
        int high =r;
        int low = l;
        while (high>=low ){
            int mid= (high+low)/2;
            if (nums[mid]==target){
                return mid ;
            }
            else if (nums[mid]>target){
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
        }
        return -1;
        
    }
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r]) {
                l = mid + 1;   // min is strictly right of mid
            } else {
                r = mid;       // mid could be the min
            }
        }
        return l;
    }
    int search(vector<int>& nums, int target) {
         int n = nums.size();
    int pivot = findMin(nums);

    if (target >= nums[pivot] && target <= nums[n - 1])
        return search(nums, target, pivot, n - 1);   // right sorted part
    return search(nums, target, 0, pivot - 1);       // left sorted part
    }
};