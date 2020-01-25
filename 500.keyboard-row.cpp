/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 *
 * https://leetcode.com/problems/keyboard-row/description/
 *
 * algorithms
 * Easy (62.75%)
 * Likes:    451
 * Dislikes: 555
 * Total Accepted:    98.6K
 * Total Submissions: 156K
 * Testcase Example:  '["Hello","Alaska","Dad","Peace"]'
 *
 * Given a List of words, return the words that can be typed using letters of
 * alphabet on only one row's of American keyboard like the image
 * below.
 * 
 * 
 * 
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input: ["Hello", "Alaska", "Dad", "Peace"]
 * Output: ["Alaska", "Dad"]
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * You may use one character in the keyboard more than once.
 * You may assume the input string will only contain letters of alphabet.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string> v;
        for(int i = 0; i < words.size(); i++){
            string s = words[i];
            int row = -1;
            bool flag = true;
            for(int j = 0; j < s.size(); j++){
                char ch = tolower(s[j]);
                if(row1.find(ch) != -1 && row != -1 && row != 1){
                    flag = false;
                    break;
                }
                if(row2.find(ch) != -1 && row != -1 && row != 2){
                    flag = false;
                    break;
                }
                 if(row3.find(ch) != -1 && row != -1 && row != 3){
                    flag = false;
                    break;
                }
                if(row1.find(ch) != -1) row = 1;
                else if(row2.find(ch) != -1) row = 2;
                else row = 3;
            }
            if(flag) v.push_back(s);
        }
        return v;
    }
};
// @lc code=end

