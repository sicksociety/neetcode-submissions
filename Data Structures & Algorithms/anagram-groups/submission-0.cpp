class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;
        
        int count[26] = {0};
        
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        for (int c : count) {
            if (c != 0) return false;
        }
        
        return true;
    }

    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> sol;

        for (const std::string& str1 : strs) {
            bool found = false;

            for (std::vector<std::string>& sv : sol) {
                if (isAnagram(str1, sv[0])) {
                    sv.push_back(str1);
                    found = true;
                    break; 
                }
            }

            if (!found) {
                sol.push_back({str1});
            }
        }

        return sol;
    }
};