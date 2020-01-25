/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 *
 * https://leetcode.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (38.50%)
 * Likes:    2161
 * Dislikes: 235
 * Total Accepted:    355.7K
 * Total Submissions: 910.9K
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * Design a stack that supports push, pop, top, and retrieving the minimum
 * element in constant time.
 * 
 * 
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 * 
 * 
 * 
 * 
 * Example:
 * 
 * 
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> Returns -3.
 * minStack.pop();
 * minStack.top();      --> Returns 0.
 * minStack.getMin();   --> Returns -2.
 * 
 * 
 * 
 * 
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> v;
    int tp;
    int min;
    int min_index;
    MinStack() {
        tp = -1;
        min = 0x7fffffff;
        min_index = -1;
    }
    
    void push(int x) {
        v.push_back(x);
        tp++;
        if(x < min){
            min = x;
            min_index = tp;
        }
    }
    
    void pop() {
        if(tp < 0) return;
        if(min_index == tp){
            int temp = 0x7fffffff;
            for(int i = 0; i <= tp-1; i++){
                if(v[i] < temp){
                    temp = v[i];
                    min_index = i;
                }
            }
            min = temp;
        }
        v.pop_back();
        tp--;
    }
    
    int top() {
        if(tp >= 0) 
          return v[tp];
        else return -1;
    }
    
    int getMin() {
        if(tp >= 0)
          return min;
        else return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

