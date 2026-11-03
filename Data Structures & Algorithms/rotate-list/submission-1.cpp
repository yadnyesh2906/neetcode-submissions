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
    ListNode* rotateRight(ListNode* head, int k) {
        int length = 0;
        ListNode* temp = head;
        if(head == NULL ||head -> next == NULL){
            return head;
        }
        while(temp!=NULL){
            temp = temp -> next;
            length++;
        }
        if(k == 0){
            return head;
        }
        
        k = k % length;
        while(k>0){
            ListNode* prev = head;
            while(prev -> next -> next != NULL){
            prev = prev -> next;
            }
            ListNode* curr = prev -> next;
            curr -> next = head;
            prev -> next = NULL;
            head = curr;
            k--;
        }
        return head;
    }
};