/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (53.34%)
 * Likes:    888
 * Dislikes: 118
 * Total Accepted:    411.5K
 * Total Submissions: 763.6K
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t , write a function to determine if t is an anagram
 * of s.
 * 
 * Example 1:
 * 
 * 
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "rat", t = "car"
 * Output: false
 * 
 * 
 * Note:
 * You may assume the string contains only lowercase alphabets.
 * 
 * Follow up:
 * What if the inputs contain unicode characters? How would you adapt your
 * solution to such case?
 * 
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
// @lc code=end

