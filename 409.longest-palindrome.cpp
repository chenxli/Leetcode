/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 *
 * https://leetcode.com/problems/longest-palindrome/description/
 *
 * algorithms
 * Easy (48.58%)
 * Likes:    656
 * Dislikes: 66
 * Total Accepted:    114.3K
 * Total Submissions: 233.6K
 * Testcase Example:  '"abccccdd"'
 *
 * Given a string which consists of lowercase or uppercase letters, find the
 * length of the longest palindromes that can be built with those letters.
 * 
 * This is case sensitive, for example "Aa" is not considered a palindrome
 * here.
 * 
 * Note:
 * Assume the length of given string will not exceed 1,010.
 * 
 * 
 * Example: 
 * 
 * Input:
 * "abccccdd"
 * 
 * Output:
 * 7
 * 
 * Explanation:
 * One longest palindrome that can be built is "dccaccd", whose length is 7.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length() == 0) return 0;
        else {
            unordered_map<char, int> mp;
            for(int i = 0; i < s.size(); i++) {
                mp[s[i]]++;
            }
            auto it = mp.begin();
            int res = 0;
            int odd = 0;
            while(it != mp.end()) {
                if(it->second % 2 == 0) res += it->second;
                else {
                    res += it->second - 1;
                    odd = 1;
                }
                it++;
            }
            return odd ? res + 1 : res;
        }
    }
};
// @lc code=end

