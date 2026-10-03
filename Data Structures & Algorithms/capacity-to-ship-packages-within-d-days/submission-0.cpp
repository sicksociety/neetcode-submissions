class Solution {
public:
    int shipWithinDays(vector<int>& v, int days) {
        int l= *max_element(v.begin(),v.end());
        int r= accumulate(v.begin(),v.end(),0);
        int sol=0;
        while (l<=r){
            int mid=l+(r-l)/2;
            int sum =0;
            int asum=1;
            for (int i : v){
                if (sum+i >mid ){
                    sum=i;
                    asum++;
                } 
                else{
                    sum+=i;
                }
            }
            if (asum>days){
                l=mid+1;
            }
            else{
                sol=mid;
                r=mid-1;
            }
        }
        return sol;
    }
};