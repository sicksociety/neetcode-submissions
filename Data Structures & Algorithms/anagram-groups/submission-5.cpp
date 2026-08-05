class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string,std::vector<std::string>> sol;
        for (std::string &str : strs){
            std::string key= str;
            std::sort(key.begin(),key.end());
            sol[key].push_back(str);
        }
        std::vector<std::vector<std::string>> result;
        for (auto &kv: sol){
            result.push_back(std::move(kv.second));
        }
        return (result);
         
        
    }
};
