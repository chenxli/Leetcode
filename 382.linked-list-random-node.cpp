/*
 * @lc app=leetcode id=382 lang=cpp
 *
 * [382] Linked List Random Node
 *
 * https://leetcode.com/problems/linked-list-random-node/description/
 *
 * algorithms
 * Medium (49.82%)
 * Likes:    457
 * Dislikes: 135
 * Total Accepted:    61.2K
 * Total Submissions: 120.8K
 * Testcase Example:  '["Solution","getRandom"]\n[[[1,2,3]],[]]'
 *
 * Given a singly linked list, return a random node's value from the linked
 * list. Each node must have the same probability of being chosen.
 * 
 * Follow up:
 * What if the linked list is extremely large and its length is unknown to you?
 * Could you solve this efficiently without using extra space?
 * 
 * 
 * Example:
 * 
 * // Init a singly linked list [1,2,3].
 * ListNode head = new ListNode(1);
 * head.next = new ListNode(2);
 * head.next.next = new ListNode(3);
 * Solution solution = new Solution(head);
 * 
 * // getRandom() should return either 1, 2, or 3 randomly. Each element should
 * have equal probability of returning.
 * solution.getRandom();
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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
       while(head){
           v.push_back(head->val);
           head = head->next;
       }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int rand_index = rand() % v.size();
        return v[rand_index];
    }
private:
    vector<int> v; 
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
// @lc code=end

