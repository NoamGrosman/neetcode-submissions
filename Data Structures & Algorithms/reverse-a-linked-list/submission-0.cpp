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
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }
};

// This solution is with two pointers.
// We use two pointers: one is curr which points to the first node, secoond is prev which points to null for now.
// Our while loop basically iterates through the list until we reach the end which is null.
// We create a temporary node which points at the next value of the first element. In the example list of {0,1,2,3}, curr->head = the address of
// the first element (0), so we set the tmp node to point to the address of (1).
// After setting the tmp node, we REVERSE the next arrow of the first element from the next one to null.
// After that, we take the prev and 