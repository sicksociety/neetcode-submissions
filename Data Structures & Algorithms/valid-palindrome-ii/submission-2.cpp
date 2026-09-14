class Solution {
public:
    bool palindrome(string s ){
        string temp = s ;
        reverse(s.begin(),s.end());
        return(temp==s);
        
        
    }
    bool validPalindrome(string s) {
            int l=0;
            int  r=s.size()-1;
            while (l<r){
                if (s[l]!=s[r]){
                    return (palindrome(s.substr(0,l)+s.substr(l+1))||palindrome(s.substr(0,r)+s.substr(r+1)));
                }
            l++;
            r--;
            }
            return true;
    }
};