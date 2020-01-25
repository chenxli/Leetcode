/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 *
 * https://leetcode.com/problems/multiply-strings/description/
 *
 * algorithms
 * Medium (31.43%)
 * Likes:    1205
 * Dislikes: 552
 * Total Accepted:    227.7K
 * Total Submissions: 719.6K
 * Testcase Example:  '"2"\n"3"'
 *
 * Given two non-negative integers num1 and num2 represented as strings, return
 * the product of num1 and num2, also represented as a string.
 * 
 * Example 1:
 * 
 * 
 * Input: num1 = "2", num2 = "3"
 * Output: "6"
 * 
 * Example 2:
 * 
 * 
 * Input: num1 = "123", num2 = "456"
 * Output: "56088"
 * 
 * 
 * Note:
 * 
 * 
 * The length of both num1 and num2 is < 110.
 * Both num1 and num2 contain only digits 0-9.
 * Both num1 and num2 do not contain any leading zero, except the number 0
 * itself.
 * You must not use any built-in BigInteger library or convert the inputs to
 * integer directly.
 * 
 * 
 */
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int n1[110] = {0},n2[110] = {0}, multi[250] = {0};
        int k = 0, m = 0;
        for(int i = num1.size() - 1; i >= 0; i--)
           n1[k++] = int(num1[i] - '0');
        for(int i = num2.size() - 1; i >= 0; i--)
           n2[m++] = int(num2[i] - '0'); 
        for(int i = 0; i < k; i++){
            for(int j = 0; j < m; j++){
                multi[i+j] += n1[i] * n2[j];
            }
        }
        int cnt = 0, temp, idx;
        for(idx = 0; idx < k + m - 1; idx++){
            temp = multi[idx];
            multi[idx] = (temp + cnt) % 10;
            cnt = (temp + cnt) / 10;
        }
        if(cnt != 0)
          multi[idx++] = cnt;
        string res = "";
        for(int i = idx - 1; i >= 0; i--){
            res = res + char(multi[i] + '0');
        }
        return res;
    }
};

