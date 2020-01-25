/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (48.38%)
 * Likes:    2557
 * Dislikes: 370
 * Total Accepted:    661.3K
 * Total Submissions: 1.4M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 * 
 * Example:
 * 
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
 * 
 * 
 */
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l = NULL;
        ListNode* p = NULL;
        while(l1 && l2){
            ListNode* node = NULL;
            if(l1->val <= l2->val){
                node = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                node = new ListNode(l2->val);
                l2 = l2->next;
            }
            if(!l){
                l = node;
                p = l;
            }
            else{
                p->next = node;
                p = p->next;
            }
        }
        if(l1){
            if(l) p->next = l1;
            else l = l1;
        } 
        if(l2){
            if(l) p->next = l2;
            else l = l2;
        }
        return l;
    }
};

