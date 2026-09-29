class Solution {
public:
    long long mySqrt(long long x) {
        long long l =0;
        long long r =x;
        long long sol = 1;
        while (l<=r){
            long long mid = l+ (r-l) /2;
            long long temp = mid *mid;
            if (temp < x ) {l=mid+1; sol=mid;}
            else if (temp>x) r =mid -1;
            else return mid;
        }
        return sol;
        
    }
};