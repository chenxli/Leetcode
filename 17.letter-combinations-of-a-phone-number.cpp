/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 *
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 *
 * algorithms
 * Medium (42.77%)
 * Likes:    2518
 * Dislikes: 330
 * Total Accepted:    436.2K
 * Total Submissions: 1M
 * Testcase Example:  '"23"'
 *
 * Given a string containing digits from 2-9 inclusive, return all possible
 * letter combinations that the number could represent.
 * 
 * A mapping of digit to letters (just like on the telephone buttons) is given
 * below. Note that 1 does not map to any letters.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input: "23"
 * Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 * 
 * 
 * Note:
 * 
 * Although the above answer is in lexicographical order, your answer could be
 * in any order you want.
 * 
 */
class Solution {
public:
    string s[9] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string str;
    vector<string> v;
    vector<string> letterCombinations(string digits) {
       if(digits.size() == 0) return v;
       dfs(digits,0);
       return v;  
    }
    void dfs(string digits,int i){
        if(i == digits.size()){
            v.push_back(str);
            return;
        }
        for(int j = 0; j < s[digits[i]-'2'].size(); j++){
            str += s[digits[i]-'2'][j];
            dfs(digits,i+1);
            str.erase(str.size()-1,1);
        }
    }
};

