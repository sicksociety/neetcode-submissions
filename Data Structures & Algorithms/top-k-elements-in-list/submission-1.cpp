class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto i : mpp) {
            buckets[i.second].push_back(i.first);
        }

        vector<int> sol;
        for (int f = buckets.size() - 1; f >= 0 && sol.size() < k; f--) {
            for (int num : buckets[f]) {
                sol.push_back(num);
                if (sol.size() == k) break;
            }
        }

        return sol;
    }
};