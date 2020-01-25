/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 *
 * https://leetcode.com/problems/reverse-vowels-of-a-string/description/
 *
 * algorithms
 * Easy (42.10%)
 * Likes:    460
 * Dislikes: 851
 * Total Accepted:    178.3K
 * Total Submissions: 420.8K
 * Testcase Example:  '"hello"'
 *
 * Write a function that takes a string as input and reverse only the vowels of
 * a string.
 * 
 * Example 1:
 * 
 * 
 * Input: "hello"
 * Output: "holle"
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "leetcode"
 * Output: "leotcede"
 * 
 * 
 * Note:
 * The vowels does not include the letter "y".
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        if(s == " ") return s;
        string vowels = "aioeu";
        int i = 0, j = s.size() - 1;
        while(i < j){
            bool flg1 = true;
            bool flg2 = true;
            char ch = tolower(s[i]);
            char ch1 = tolower(s[j]);
            if(vowels.find(ch) == string::npos){
                i++;
                flg1 = false;
            }
            if (vowels.find(ch1) == string::npos){
                j--;
                flg2 = false;
            }
            if(flg1 && flg2){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++,j--;
            }
        }
        return s;
    }
};
// @lc code=end

