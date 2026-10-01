class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        if (piles.size()==h){
            return maxi;
        }
        else{
            int l =1;
            int r=maxi;
            int sol=maxi;
            while (l<=r){
                int mid = l + (r-l)/2; // to ovoid overflow 
                int sum =0;
                for (int i =0 ; i<piles.size();i++){
                    if (piles[i]<=mid){
                        sum++;
                    }
                    else{
                        if (piles[i]%mid!=0){
                            sum=sum+(piles[i]/mid)+1;
                        }
                        else{
                            sum=sum+(piles[i]/mid);
                        }
                    }
                }
                if (sum<=h){
                    r=mid-1;
                    sol=mid;
                }
                else{
                    l=mid+1;
                }
                

            }
            return sol;
        }
        
    }
};
