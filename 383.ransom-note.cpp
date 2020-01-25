/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 *
 * https://leetcode.com/problems/ransom-note/description/
 *
 * algorithms
 * Easy (50.60%)
 * Likes:    371
 * Dislikes: 140
 * Total Accepted:    127.8K
 * Total Submissions: 251K
 * Testcase Example:  '"a"\n"b"'
 *
 * 
 * Given an arbitrary ransom note string and another string containing letters
 * from all the magazines, write a function that will return true if the
 * ransom 
 * note can be constructed from the magazines ; otherwise, it will return
 * false. 
 * 
 * 
 * Each letter in the magazine string can only be used once in your ransom
 * note.
 * 
 * 
 * Note:
 * You may assume that both strings contain only lowercase letters.
 * 
 * 
 * 
 * canConstruct("a", "b") -> false
 * canConstruct("aa", "ab") -> false
 * canConstruct("aa", "aab") -> true
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size()) return false;
        int arr[26] = {0};
        for(int i = 0; i < ransomNote.size(); i++){
            arr[ransomNote[i]-'a']++;
        }
        for(int i = 0; i < magazine.size(); i++){
            arr[magazine[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] > 0){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

