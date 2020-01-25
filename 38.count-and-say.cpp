/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 *
 * https://leetcode.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (41.58%)
 * Likes:    891
 * Dislikes: 6974
 * Total Accepted:    314K
 * Total Submissions: 752.7K
 * Testcase Example:  '1'
 *
 * The count-and-say sequence is the sequence of integers with the first five
 * terms as following:
 * 
 * 
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 * 
 * 
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 * 
 * Given an integer n where 1 ≤ n ≤ 30, generate the n^th term of the
 * count-and-say sequence.
 * 
 * Note: Each term of the sequence of integers will be represented as a
 * string.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: 1
 * Output: "1"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 4
 * Output: "1211"
 * 
 */
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i = 1; i < n; i++){
            string temp;
            int count = 1;
            int j = 1;
            while(j < s.size()){
                if(s[j] != s[j-1]){
                    temp = temp + char(count + '0') + s[j-1];
                    count = 1;
                }
                else count++;
                j++;
            }
            temp = temp + char(count+'0') + s[j-1];
            s = temp;
        }
        return s;
    }
};

