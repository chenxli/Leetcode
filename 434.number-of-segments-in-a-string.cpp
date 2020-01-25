/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 *
 * https://leetcode.com/problems/number-of-segments-in-a-string/description/
 *
 * algorithms
 * Easy (37.23%)
 * Likes:    161
 * Dislikes: 620
 * Total Accepted:    63.9K
 * Total Submissions: 171.2K
 * Testcase Example:  '"Hello, my name is John"'
 *
 * Count the number of segments in a string, where a segment is defined to be a
 * contiguous sequence of non-space characters.
 * 
 * Please note that the string does not contain any non-printable characters.
 * 
 * Example:
 * 
 * Input: "Hello, my name is John"
 * Output: 5
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        if(s.size() == 0) return 0;
        string temp;
        int counts = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                if(temp != ""){
                    temp = "";
                    counts++;
                }
            }
        }
        if(temp != "") counts++;
        return counts;
    }
};
// @lc code=end

