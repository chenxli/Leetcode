/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (27.72%)
 * Likes:    4185
 * Dislikes: 388
 * Total Accepted:    636.6K
 * Total Submissions: 2.3M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 * 
 * Example 1:
 * 
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "cbbd"
 * Output: "bb"
 * 
 * 
 */
class Solution {
public:
    int dp[1000][1000];
    string longestPalindrome(string s) {
        int n = s.size();
        int len = 1;
        string str = "";
        str += s[0];
        for(int k = 0; k < n; k++) dp[k][k] = 1;
        for(int k = 0; k < n - 1; k++){
            if(s[k] == s[k+1]) {
                dp[k][k+1] = 1;
                len = 2;
                if(str.length() < len) str = s.substr(k,2);
            }
        }
        len = 3;
        while(len <= n){
            for(int i = 0; i <= n - len; i++){
                int j = i + len - 1;
                if(s[i] == s[j] && dp[i+1][j-1] == 1){
                    dp[i][j] = 1;
                    if(str.length() < len) str = s.substr(i,len);
                }
            }
            len++;
        }
        return str;
    }
};

