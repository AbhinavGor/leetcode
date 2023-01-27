/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* dummy = res;
        int carry = 0;
        
        while(l1 && l2){            
            int t = l1->val + l2->val + carry;
            
            l1 = l1->next;
            l2 = l2->next ;
            
            carry = (t/10)%10;
            dummy->val = t - carry*10;
            
            if(l1 || l2){
                dummy->next = new ListNode();
                dummy = dummy->next;
            }else if(carry){
                dummy->next = new ListNode();
                dummy = dummy->next;
                dummy->val = carry;
            }       
        }
        
        while(l1){            
            int t = l1->val + carry;
            
            l1 = l1->next;
            
            carry = (t/10)%10;
            dummy->val = t - carry*10;
            
            if(l1){
                dummy->next = new ListNode();
                dummy = dummy->next;
            }else if(carry){
                dummy->next = new ListNode();
                dummy = dummy->next;
                dummy->val = carry;
            }
        }
        
        while(l2){            
            int t = l2->val + carry;
            
            l2 = l2->next;
            
            carry = (t/10)%10;
            dummy->val = t - carry*10;
            
            if(l2){
                dummy->next = new ListNode();
                dummy = dummy->next;
            }else if(carry){
                dummy->next = new ListNode();
                dummy = dummy->next;
                dummy->val = carry;
            }
        }
        
        return res;
    }
};