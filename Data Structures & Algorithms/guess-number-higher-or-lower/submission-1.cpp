/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l= 0;
        int r=n-1;
        int g = (l+n)/2;
        while (guess(g)!=0){
            if (guess(g)==-1){
                l=g-1;
            }
            else if (guess(g)==1){
                r=g+1;
            }
            g=(l+r)/2;
        }
        return(g);
    }
};