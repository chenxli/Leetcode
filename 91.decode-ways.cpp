/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 *
 * https://leetcode.com/problems/decode-ways/description/
 *
 * algorithms
 * Medium (22.79%)
 * Likes:    1993
 * Dislikes: 2261
 * Total Accepted:    331.8K
 * Total Submissions: 1.4M
 * Testcase Example:  '"12"'
 *
 * A message containing letters from A-Z is being encoded to numbers using the
 * following mapping:
 * 
 * 
 * 'A' -> 1
 * 'B' -> 2
 * ...
 * 'Z' -> 26
 * 
 * 
 * Given a non-empty string containing only digits, determine the total number
 * of ways to decode it.
 * 
 * Example 1:
 * 
 * 
 * Input: "12"
 * Output: 2
 * Explanation: It could be decoded as "AB" (1 2) or "L" (12).
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "226"
 * Output: 3
 * Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2
 * 6).
 * 
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {
        if(s.size() == 0) return 0;
        vector<int> dp(s.size(), 0);
        dp[0] = s[0] == '0' ? 0 : 1;
        if(s.size() == 1) return dp[0];
        int k = s[0] > '0' && s[1] > '0' ?  1 : 0;
        if(s[0] == '1' ||(s[0] == '2' && s[1] <= '6')) dp[1] = k + 1;
        else dp[1] = k;
        for(int i = 2; i < s.size(); i++) {
            if(s[i] != '0') {
                dp[i] += dp[i-1];
            }
            if(s[i - 1] == '1' || (s[i-1] == '2' && s[i] <= '6')) {
                dp[i] += dp[i - 2];
            }
        }
        return dp[s.size()-1];
    }
};
// @lc code=end

