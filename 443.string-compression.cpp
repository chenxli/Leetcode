/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 *
 * https://leetcode.com/problems/string-compression/description/
 *
 * algorithms
 * Easy (38.26%)
 * Likes:    484
 * Dislikes: 1561
 * Total Accepted:    73.8K
 * Total Submissions: 189.9K
 * Testcase Example:  '["a","a","b","b","c","c","c"]'
 *
 * Given an array of characters, compress it in-place.
 * 
 * The length after compression must always be smaller than or equal to the
 * original array.
 * 
 * Every element of the array should be a character (not int) of length 1.
 * 
 * After you are done modifying the input array in-place, return the new length
 * of the array.
 * 
 * 
 * Follow up:
 * Could you solve it using only O(1) extra space?
 * 
 * 
 * Example 1:
 * 
 * 
 * Input:
 * ["a","a","b","b","c","c","c"]
 * 
 * Output:
 * Return 6, and the first 6 characters of the input array should be:
 * ["a","2","b","2","c","3"]
 * 
 * Explanation:
 * "aa" is replaced by "a2". "bb" is replaced by "b2". "ccc" is replaced by
 * "c3".
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input:
 * ["a"]
 * 
 * Output:
 * Return 1, and the first 1 characters of the input array should be: ["a"]
 * 
 * Explanation:
 * Nothing is replaced.
 * 
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input:
 * ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
 * 
 * Output:
 * Return 4, and the first 4 characters of the input array should be:
 * ["a","b","1","2"].
 * 
 * Explanation:
 * Since the character "a" does not repeat, it is not compressed.
 * "bbbbbbbbbbbb" is replaced by "b12".
 * Notice each digit has it's own entry in the array.
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * All characters have an ASCII value in [35, 126].
 * 1 <= len(chars) <= 1000.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1) return 1;
        int cnt = 1;
        int j = 0, i = 0;
        for(i = 0; i < chars.size(); i++){
            if(i + 1 == chars.size()){
                chars[j++] = chars[i];
                if(cnt > 1){
                    for(char ch : to_string(cnt)){
                        chars[j++] = ch;
                    }
                }
            }
            else if(chars[i] == chars[i+1]){
                cnt++;
            }
            else{
                if(cnt > 1){
                    chars[j++] = chars[i];
                    for(char ch : to_string(cnt)){
                        chars[j++] = ch;
                    }
                    cnt = 1;
                }
                else {
                    chars[j++] = chars[i];
                }
            }
        }
        return j;
    }
};
// @lc code=end

