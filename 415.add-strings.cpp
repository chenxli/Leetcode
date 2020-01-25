/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 *
 * https://leetcode.com/problems/add-strings/description/
 *
 * algorithms
 * Easy (44.41%)
 * Likes:    542
 * Dislikes: 182
 * Total Accepted:    122.5K
 * Total Submissions: 271.5K
 * Testcase Example:  '"0"\n"0"'
 *
 * Given two non-negative integers num1 and num2 represented as string, return
 * the sum of num1 and num2.
 * 
 * Note:
 * 
 * The length of both num1 and num2 is < 5100.
 * Both num1 and num2 contains only digits 0-9.
 * Both num1 and num2 does not contain any leading zero.
 * You must not use any built-in BigInteger library or convert the inputs to
 * integer directly.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string s;
        int tag = 0;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int i;
        for(i = 0; i < num1.size() && i < num2.size(); i++){
            int num = ((int)(num1[i]-'0') + (int)(num2[i]-'0') + tag) % 10;
            tag = ((int)(num1[i] - '0') + (int)(num2[i] - '0') + tag) / 10;
            s = (char)(num + '0') + s;
        }
        while(i < num1.size()){
            int num = ((int)(num1[i] - '0') + tag) % 10;
            tag = ((int)(num1[i] - '0') + tag) / 10;
            s = (char)(num + '0') + s;
            i++;
        }
        while(i < num2.size()){
            int num = ((int)(num2[i] - '0') + tag) % 10;
            tag = ((int)(num2[i] - '0') + tag) / 10;
            s = (char)(num + '0') + s;
            i++;
        }
        if(tag){
            s = (char)(tag + '0') + s;
        }
        return s;
    }
};
// @lc code=end

