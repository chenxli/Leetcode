/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (50.56%)
 * Likes:    1255
 * Dislikes: 89
 * Total Accepted:    338.9K
 * Total Submissions: 666.3K
 * Testcase Example:  '"leetcode"'
 *
 * 
 * Given a string, find the first non-repeating character in it and return it's
 * index. If it doesn't exist, return -1.
 * 
 * Examples:
 * 
 * s = "leetcode"
 * return 0.
 * 
 * s = "loveleetcode",
 * return 2.
 * 
 * 
 * 
 * 
 * Note: You may assume the string contain only lowercase letters.
 * 
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size() == 0) return -1; 
        int arr[26] = {0};
        for(int i = 0; i < s.size(); i++){
            arr[s[i] - 'a']++;
        }
        for(int j = 0; j < s.size(); j++){
            if(arr[s[j] - 'a'] == 1) return j;
        }
        return -1;
    }
};
// @lc code=end

