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
        int l = 1;
        int r = n;
        int g = l + (r - l) / 2;
        int res = guess(g);
        while (res != 0) {
            if (res == -1) r = g - 1;   
            else           l = g + 1;  
            g = l + (r - l) / 2;
            res = guess(g);
        }
        return g;
    }
};