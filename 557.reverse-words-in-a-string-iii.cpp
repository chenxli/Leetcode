/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 *
 * https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
 *
 * algorithms
 * Easy (65.12%)
 * Likes:    746
 * Dislikes: 75
 * Total Accepted:    160.2K
 * Total Submissions: 241.1K
 * Testcase Example:  '"Let\'s take LeetCode contest"'
 *
 * Given a string, you need to reverse the order of characters in each word
 * within a sentence while still preserving whitespace and initial word order.
 * 
 * Example 1:
 * 
 * Input: "Let's take LeetCode contest"
 * Output: "s'teL ekat edoCteeL tsetnoc"
 * 
 * 
 * 
 * Note:
 * In the string, each word is separated by single space and there will not be
 * any extra space in the string.
 * 
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res, temp;
        while(!ss.eof()){
            ss >> temp;
            reverse(temp.begin(), temp.end());
            res += temp;
            res += " ";
        }
        return res.substr(0, res.size()-1);
    }
};
// @lc code=end

