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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* next = NULL;
        
        for(int i = 1; i < left; i++){
            prev = prev -> next;
        }
        ListNode* curr = prev -> next;
        ListNode* sublist = curr;
        ListNode* prevNode = NULL;
        int count = right - left + 1;
        while(count > 0){
           next = curr -> next;
           curr -> next = prevNode;
           prevNode = curr;
           curr = next;
           count--;
        }
        prev -> next = prevNode;
        sublist -> next = curr;
        return dummy.next;
    }
};