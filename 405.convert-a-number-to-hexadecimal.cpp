/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 *
 * https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/
 *
 * algorithms
 * Easy (42.40%)
 * Likes:    323
 * Dislikes: 86
 * Total Accepted:    54.5K
 * Total Submissions: 127.6K
 * Testcase Example:  '26'
 *
 * 
 * Given an integer, write an algorithm to convert it to hexadecimal. For
 * negative integer, two’s complement method is used.
 * 
 * 
 * Note:
 * 
 * All letters in hexadecimal (a-f) must be in lowercase.
 * The hexadecimal string must not contain extra leading 0s. If the number is
 * zero, it is represented by a single zero character '0'; otherwise, the first
 * character in the hexadecimal string will not be the zero character.
 * The given number is guaranteed to fit within the range of a 32-bit signed
 * integer.
 * You must not use any method provided by the library which converts/formats
 * the number to hex directly.
 * 
 * 
 * 
 * Example 1:
 * 
 * Input:
 * 26
 * 
 * Output:
 * "1a"
 * 
 * 
 * 
 * Example 2:
 * 
 * Input:
 * -1
 * 
 * Output:
 * "ffffffff"
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        string s;
        string ch = "0123456789abcdef";
        if(num == 0) return "0";
        else if (num > 0){
            while(num){
                s = ch[num % 16] + s;
                num /= 16;
            }
        }
        else{
            string s1;
            long long n = -(long long)num;
            for(int i = 0; i < 32; i++){
                int tmp = n % 2;
                if(tmp == 0) tmp = 1;
                else tmp = 0;
                s1 = (char)(tmp + '0') + s1;
                n /= 2;
            }
            int tag = 0;
            int temp = ((int)(s1[31] - '0') + tag + 1) % 2;
            tag = ((int)(s1[31] - '0') + tag + 1) / 2;
            s1[31] = (char)(temp + '0');
            for(int i = 30; i >= 0; i--){
                int tmp = ((int)(s1[i] - '0') + tag) % 2;
                tag = ((int)(s1[i] - '0') + tag) / 2;
                s1[i] = (char)(tmp + '0');
            }
            for(int i = 31; i >= 0; i -= 4){
                int index = (int)(s1[i]-'0') + (int)(s1[i-1]-'0') * 2 +
                            (int)(s1[i-2]-'0') * 4 + (int)(s1[i-3]-'0') * 8;
                s = ch[index] + s;
            }
        }
        return s;
    }
};
// @lc code=end

