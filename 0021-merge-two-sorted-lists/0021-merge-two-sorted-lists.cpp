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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return nullptr;
        ListNode* curr = new ListNode();
        ListNode* res = curr;

        while(list1 && list2) {
            if(list1->val < list2->val) {
                res->val = list1->val;
                list1 = list1->next;
            } else {
                res->val = list2->val;
                list2 = list2->next;
            }
            if(list1 || list2){
                res->next = new ListNode();
                res = res->next;
            }
        }

        while(list1) {
            res->val = list1->val;
            list1 = list1->next;
            if(list1) {
                res->next = new ListNode();
                res = res->next;
            }
        }

        while(list2) {
            res->val = list2->val;
            list2 = list2->next;
            if(list2) {
                res->next = new ListNode();
                res = res->next;
            }
        }

        return curr;
    }
};