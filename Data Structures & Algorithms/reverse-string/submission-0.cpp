class Solution {
public:
    void swap (vector<char>&s ,int idx_f,int idx_t){
        int temp =s[idx_f];
        s[idx_f]=s[idx_t];
        s[idx_t]=temp;
    }
    void reverseString(vector<char>& s) {
        //reverse(s.begin(), s.end()); // cheat code 

        int idx_f= 0;
        int idx_t= s.size()-1;
        if (s.size()%2==0){
            while (idx_t>idx_f){
                swap(s,idx_f,idx_t);
                idx_t--;
                idx_f++;
            }
        }
        else {
            while (idx_t!=idx_f){
                swap(s,idx_f,idx_t);
                idx_t--;
                idx_f++;

            }
        }
    }
};