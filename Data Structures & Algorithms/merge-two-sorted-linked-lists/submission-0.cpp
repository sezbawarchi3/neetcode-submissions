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
        ListNode* mhead = new ListNode(0), *cur1 = list1, *cur2 = list2, *mtail = mhead;
        while(cur1 != NULL && cur2 != NULL){
            if(cur2->val <= cur1->val){
                mtail->next = cur2;
                cur2 = cur2->next;
            }
            else{
                mtail->next = cur1;
                cur1 = cur1->next;
            }
            mtail = mtail->next;
        }
        if(cur1 != NULL) mtail->next = cur1;
        if(cur2 != NULL) mtail->next = cur2;
        ListNode* result = mhead->next;
        delete mhead;

        return result;
    }
};
