/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (33.97%)
 * Likes:    1546
 * Dislikes: 1423
 * Total Accepted:    521.1K
 * Total Submissions: 1.5M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.size() == 0) return s;
        if(strs.size() == 1) return strs[0];
        bool flag = true;
        int k = 0;
        while(true){
            for(int i = 0; i < strs.size() - 1; i++){
                if(k >= strs[i].size()) return s;
                if(strs[i][k] != strs[i+1][k]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                s += strs[0][k];
                k++;
            }
            else break;
        }
        return s;
    }
};

