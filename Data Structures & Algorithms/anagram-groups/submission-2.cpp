class Solution {
public:
  bool isAnagram(string s, string t) {
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> sol;
        for (string str1 : strs ){
            bool found =false;
            for (vector<string> &sv : sol ){
                    if (isAnagram(str1,sv[0])){
                       sv.push_back(str1);
                       found =true;
                       break;
                    }
            }
            if (!found){
                vector<string>newv;
                newv.push_back(str1);
                sol.push_back(newv);
                
            }

        }
        return sol;
        
    }
};