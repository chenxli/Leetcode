/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (36.89%)
 * Likes:    2028
 * Dislikes: 289
 * Total Accepted:    309.6K
 * Total Submissions: 831.8K
 * Testcase Example:  '[1,2]'
 *
 * Given a singly linked list, determine if it is a palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2
 * Output: false
 * 
 * Example 2:
 * 
 * 
 * Input: 1->2->2->1
 * Output: true
 * 
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
 * 
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        if(head == NULL) return true;
        ListNode* p = head;
        while(p){
            v.push_back(p->val);
            p = p->next;
        }
        for(int i = 0; i < v.size() / 2; i++){
            if(v[i] != v[v.size()-1-i]) return false;
        }
        return true;
    }
};
// @lc code=end

