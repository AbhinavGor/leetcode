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
        ListNode* dum = head;
        vector<int> res;

        while(dum->next != nullptr) {
            res.push_back(dum->val);
            dum = dum->next;
        }
        res.push_back(dum->val);
        dum = head;
        int i = 0, n = res.size()-1;
        while(dum->next != nullptr) {
            if(i%2 == 0) {
                dum->val = res[i/2];
            } else {
                dum->val = res[n--];
            }
            dum = dum->next;
            i++;
        }
        dum->val = res[n--];
    }
};