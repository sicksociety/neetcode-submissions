class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> v(nums.begin(), nums.end());
        vector<int> t(v.begin(), v.end());

        int max_len = 1;
        int curr = 1;

        for (size_t i = 1; i < t.size(); i++) {
            if (t[i] == t[i - 1] + 1) {
                curr++;
            } else {
                max_len = max(max_len, curr);
                curr = 1; 
            }
        }

        return max(max_len, curr);
    }
};
