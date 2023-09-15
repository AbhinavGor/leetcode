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
    void reorderList(ListNode* head) {
        vector<int> vals;
        ListNode* temp = head;

        while(temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;

        int f = 0, l = vals.size() - 1, c = 0;

        while(temp) {
            if(c % 2 == 0) {
                temp->val = vals[f];
                f++;
            } else {
                temp->val = vals[l];
                l--;
            }
            c++;
            temp = temp->next;
        }
    }
};