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
        
        auto t = head;
        
        int len = 0;
        while(head != NULL){
            head = head->next;
            len++;
        }
        
        int pos = len - n;
        
        if(pos == 0){
            t = t->next;
            return t;
        }
        
        head = t;
        
        for(int i = 1; i < pos; i++){
            head = head->next;
        }
        
        head->next = head->next->next;
        
        return t;
    }
};