/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 *
 * https://leetcode.com/problems/detect-capital/description/
 *
 * algorithms
 * Easy (52.70%)
 * Likes:    362
 * Dislikes: 229
 * Total Accepted:    97.7K
 * Total Submissions: 184.9K
 * Testcase Example:  '"USA"'
 *
 * Given a word, you need to judge whether the usage of capitals in it is right
 * or not.
 * 
 * We define the usage of capitals in a word to be right when one of the
 * following cases holds:
 * 
 * 
 * All letters in this word are capitals, like "USA".
 * All letters in this word are not capitals, like "leetcode".
 * Only the first letter in this word is capital, like "Google".
 * 
 * Otherwise, we define that this word doesn't use capitals in a right way.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: "USA"
 * Output: True
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "FlaG"
 * Output: False
 * 
 * 
 * 
 * 
 * Note: The input will be a non-empty word consisting of uppercase and
 * lowercase latin letters.
 * 
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool capital = false;
        bool allNotCap = true;
        int lastIndex = -1;
        for(int i = 0; i < word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                capital = true;
                lastIndex = i;
            }
            else allNotCap = false;
        }
        if(!allNotCap && capital && lastIndex != 0) return false;
        return true;
    }
};
// @lc code=end

