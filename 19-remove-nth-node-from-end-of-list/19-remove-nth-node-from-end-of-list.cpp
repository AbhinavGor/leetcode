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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = head;
        int size = 0;
        while(dummy != NULL){
            dummy = dummy->next;
            size++;
        }
        
        ListNode* f = new ListNode(0);
        ListNode* cf = f;
        
        int count = size - n;
        
        ListNode* t = head;
        
        if(count == 0){
            t = t->next;
            return t;
        }
        
        for(int i = 0; i < count; i++){
            cf->next = head;
            head = head->next;
            cf = cf->next;
        }
        
        if(cf->next){
            cf->next = cf->next->next;
        }
        
        return f->next;
    }
};