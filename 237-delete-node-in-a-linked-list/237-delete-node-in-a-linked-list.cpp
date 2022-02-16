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
    void deleteNode(ListNode* node) {
        int len = 0;
        ListNode* tnode = node;
        while(tnode->next){
            len++;
            tnode = tnode->next;
        }
        
        while(len>1){
            len--;
            cout<<node->val<<endl;
            ListNode* temp_node = node->next;
            node->val = temp_node->val;
            node = node->next;
        }
        
        cout<<node->val<<endl;
        ListNode* temp_node = node->next;
        node->val = temp_node->val;
        node->next = NULL;
    }
};