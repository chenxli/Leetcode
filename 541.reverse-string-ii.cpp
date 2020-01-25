/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 *
 * https://leetcode.com/problems/reverse-string-ii/description/
 *
 * algorithms
 * Easy (45.93%)
 * Likes:    304
 * Dislikes: 937
 * Total Accepted:    72.1K
 * Total Submissions: 154.6K
 * Testcase Example:  '"abcdefg"\n2'
 *
 * 
 * Given a string and an integer k, you need to reverse the first k characters
 * for every 2k characters counting from the start of the string. If there are
 * less than k characters left, reverse all of them. If there are less than 2k
 * but greater than or equal to k characters, then reverse the first k
 * characters and left the other as original.
 * 
 * 
 * Example:
 * 
 * Input: s = "abcdefg", k = 2
 * Output: "bacdfeg"
 * 
 * 
 * 
 * Restrictions: 
 * 
 * ⁠The string consists of lower English letters only.
 * ⁠Length of the given string and k will in the range [1, 10000]
 * 
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        string s1;
        int i = 0;
        if(size < k){
            reverse(s.begin(), s.end());
            s1 = s;
            return s1;
        }
        while(i < size){
            for(int j = min(size-1, i + k - 1); j >= i; j--){
                s1 += s[j];
            }
            for(int j = i + k; j < size && j < i + 2 * k; j++){
                s1 += s[j];
            }
            i += 2 * k;
        }
        return s1;
    }
};
// @lc code=end

