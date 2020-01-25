/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 *
 * https://leetcode.com/problems/word-pattern/description/
 *
 * algorithms
 * Easy (35.50%)
 * Likes:    791
 * Dislikes: 106
 * Total Accepted:    159.3K
 * Total Submissions: 445.5K
 * Testcase Example:  '"abba"\n"dog cat cat dog"'
 *
 * Given a pattern and a string str, find if str follows the same pattern.
 * 
 * Here follow means a full match, such that there is a bijection between a
 * letter in pattern and a non-empty word in str.
 * 
 * Example 1:
 * 
 * 
 * Input: pattern = "abba", str = "dog cat cat dog"
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input:pattern = "abba", str = "dog cat cat fish"
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: pattern = "aaaa", str = "dog cat cat dog"
 * Output: false
 * 
 * Example 4:
 * 
 * 
 * Input: pattern = "abba", str = "dog dog dog dog"
 * Output: false
 * 
 * Notes:
 * You may assume pattern contains only lowercase letters, and str contains
 * lowercase letters that may be separated by a single space.
 * 
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        if(pattern.size() == 0) return false;
        stringstream ss(str);
        string word;
        int count = 0;
        map<char, string> mp;
        map<string, char> mp1;
        while(!ss.eof()){
            ss >> word;
            if(mp.find(pattern[count]) == mp.end() && mp1.find(word) == mp1.end()){
                mp[pattern[count]] = word;
                mp1[word] = pattern[count];
            }
            else if (mp.find(pattern[count]) == mp.end() || mp1.find(word) == mp1.end()){
                return false;
            }
            else{
                char ch = mp1[word];
                if(ch != pattern[count]) return false;
            }
            count++;
        }
        if(pattern.size() > count) return false;
        return true;
    }
};
// @lc code=end

