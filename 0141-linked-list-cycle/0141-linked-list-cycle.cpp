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
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *slow = head->next;
        ListNode *fast;
        if(slow) {
            fast = slow->next;
        } else {
            return false;
        }
        while(fast && slow) {
            if(fast == slow) return true;
            slow = slow->next;
            if(fast->next) {
                fast = fast->next->next;
            } else {
                return false;
            }
        }
        return false;
    }
};