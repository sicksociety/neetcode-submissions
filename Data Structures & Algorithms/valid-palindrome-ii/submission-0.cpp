class Solution {
public:
    bool palindrome(string s ){
        int r=0;
        int l=s.size()-1;
        while (l>r){
            while (l>r && !isalnum(s[r])){
                r++;
            }
            while (l>r && !isalnum(s[l])){
                l--;
            }
            if (s[r]!=s[l]){
                return false;
            }
            l--;
            r++;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if (palindrome(s)){
            return true ;
        }
        else {
            int c=0;
            while (c<s.size()){
                string temp =s ;
                temp.erase(c,1);
                if (palindrome(temp)){
                    return true;
                }
                c++;
            }
            return false;
            
        }
        
    }
};