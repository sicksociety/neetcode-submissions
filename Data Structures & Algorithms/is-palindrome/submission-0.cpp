class Solution {
public:
    bool isPalindrome(std::string s) {
        int l=0;
        int r=s.size()-1;
        while (l<r){
            while (l<r && !isalnum(s[l])){
                l++;
            }
            while (l<r && !isalnum(s[r])){
                r--;
            }
            if (tolower(s[l])!=tolower(s[r])){
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
};