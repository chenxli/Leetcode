/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (37.02%)
 * Likes:    3243
 * Dislikes: 153
 * Total Accepted:    666.2K
 * Total Submissions: 1.8M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        if(s.size() == 0) return true;
        myStack.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(myStack.size() == 0) myStack.push(s[i]);
            else if(myStack.top() == '[' && s[i] == ']') myStack.pop();
            else if(myStack.top() == '{' && s[i] == '}') myStack.pop();
            else if(myStack.top() == '(' && s[i] == ')') myStack.pop();
            else myStack.push(s[i]);
        }
        if(myStack.size()) return false;
        else return true;
    }
};

