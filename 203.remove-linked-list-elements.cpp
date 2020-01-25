/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 *
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 *
 * algorithms
 * Easy (36.33%)
 * Likes:    1001
 * Dislikes: 59
 * Total Accepted:    256.1K
 * Total Submissions: 700.6K
 * Testcase Example:  '[1,2,6,3,4,5,6]\n6'
 *
 * Remove all elements from a linked list of integers that have value val.
 * 
 * Example:
 * 
 * 
 * Input:  1->2->6->3->4->5->6, val = 6
 * Output: 1->2->3->4->5
 * 
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val){
            head = head->next;
        }
        if(head == NULL) return NULL;
        ListNode *pre, *cur;
        pre = head;
        cur = head->next;
        while(cur){
            if(cur->val == val){
                pre->next = cur->next;
                cur = pre->next;
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
// @lc code=end

