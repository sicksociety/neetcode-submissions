class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        int prefix = 1;
        while (true) {
            for (const std::string& s : strs) {
                if (prefix - 1 == s.size() || s.substr(0, prefix) != strs[0].substr(0, prefix)) {
                    return strs[0].substr(0, prefix - 1);
                }
            }
            prefix++;
        }
    }
};