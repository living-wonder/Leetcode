class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fastptr = head;
        ListNode* slowptr = head;
        stack<int> stk;
        if(head->next==NULL){
            return true;
        }
        
        // Push the first half of the list onto the stack
        while (fastptr != nullptr && fastptr->next != nullptr) {
            stk.push(slowptr->val);
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }
          if (fastptr != nullptr) {
            slowptr = slowptr->next;
        }
        
        
       
        
        // Compare the second half of the list with the stack
        while (slowptr != nullptr) {
            if (slowptr->val != stk.top()) {
                return false;
            }
            stk.pop();
            slowptr = slowptr->next;
        }
        
        return true;
    }
};
