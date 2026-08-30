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
    bool isRepeated(vector<int> node){
        unordered_map <int, int> m;
        for(int n : node){
            m[n]++;
            if(m[n] == 2) return true;
        }
        return false;
    }

    bool hasCycle(ListNode* head) {
        vector<int> node;
        if(head == nullptr) return false;
        ListNode* cur = head;
        while(cur->next != NULL){
            node.push_back(cur->val);
            if(isRepeated(node)) return true;
            cur = cur->next;
        }
        return false;
    }
};
