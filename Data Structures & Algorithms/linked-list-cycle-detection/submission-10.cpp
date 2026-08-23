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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> nodeSet;
        ListNode* curr = head;
        while (curr) {
            if(nodeSet.find(curr) != nodeSet.end()) { // That means we found it inside our nodeSet -> there a loop
                return true;
            }
            nodeSet.insert(curr);
            curr = curr->next;
        }
    return false;
    }
};
