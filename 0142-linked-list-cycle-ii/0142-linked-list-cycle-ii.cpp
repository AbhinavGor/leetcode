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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;
        
        ListNode *dummy = head;
        
        if(dummy == NULL){
            return NULL;
        }
        visited[dummy] = true;
        
        while(dummy->next != NULL){
            if(visited[dummy->next]){
                dummy = dummy->next;
                return dummy;
            }else{
                visited[dummy->next] = true;
                dummy = dummy->next;
            }
        }
        
        return NULL;
    }
};