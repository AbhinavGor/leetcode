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
        ListNode* dupHead = head;
        int len = 0;
        
        while(dupHead != NULL){
            dupHead = dupHead->next;
            len++;
        }
        
        int mid = 0;
        
        if(len%2){
            mid = len/2;
        }else{
            mid = len/2;
        }
        
        if(mid == 0)
            return head;
        len = 1;
        
        while(head != NULL){
            head = head->next;
            if(len == mid){
                return head;
            }
            
            len++;
        }
        
        return NULL;
    }
};