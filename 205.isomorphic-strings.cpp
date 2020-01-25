/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 *
 * https://leetcode.com/problems/isomorphic-strings/description/
 *
 * algorithms
 * Easy (38.05%)
 * Likes:    921
 * Dislikes: 267
 * Total Accepted:    235.2K
 * Total Submissions: 612.6K
 * Testcase Example:  '"egg"\n"add"'
 *
 * Given two strings s and t, determine if they are isomorphic.
 * 
 * Two strings are isomorphic if the characters in s can be replaced to get t.
 * 
 * All occurrences of a character must be replaced with another character while
 * preserving the order of characters. No two characters may map to the same
 * character but a character may map to itself.
 * 
 * Example 1:
 * 
 * 
 * Input: s = "egg", t = "add"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "foo", t = "bar"
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: s = "paper", t = "title"
 * Output: true
 * 
 * Note:
 * You may assume both s and t have the same length.
 * 
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())  return false;
        map<char,char> mp;
        map<char,bool> hasmp;
        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) == mp.end()){
                if(hasmp[t[i]]) return false;
                mp[s[i]] = t[i];
                hasmp[t[i]] = true;
            }
            else if(mp[s[i]] != t[i]) return false;
        }
        return true;
    }
};
// @lc code=end

