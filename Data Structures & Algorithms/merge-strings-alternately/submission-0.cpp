class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l =0;
        int r =0;
        string sum="";
        while (l< word1.size() && r<word2.size()){
            sum+=word1[l];
            sum+=word2[r];
            l++;
            r++;
        }
        while(l<word1.size()){
            sum+=word1[l];
            l++;
        }
        while(r<word2.size()){
            sum+=word2[r];
            r++;
        }
        return sum;

        

        
    }
};