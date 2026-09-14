class Solution {
public:
    bool palindrome(string s ){
        string temp = s ;
        reverse(s.begin(),s.end());
        return(temp==s);
        
        
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