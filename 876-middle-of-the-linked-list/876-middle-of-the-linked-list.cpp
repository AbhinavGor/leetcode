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
    ListNode* middleNode(ListNode* head) {
        ListNode* dummy = head;
        int count = 0;
        
        while(dummy != NULL){
            count++;
            dummy = dummy->next;
        }
        
        if(count%2){
            count = (count + 1)/2;
        }else{
            count = (count/2) + 1;
        }
        
        for(int i = 1; i < count; i++){
            head = head->next;
        }
        
        return head;
    }
};