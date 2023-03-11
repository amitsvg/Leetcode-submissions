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
        if(head == NULL){
            return NULL;
        }
        ListNode *nxt, *prev=NULL, *cur;
        cur = head;
        nxt=cur->next;

        while(cur != NULL && nxt != NULL){
            ListNode *temp = nxt->next;
            cur->next = prev;
            nxt->next = cur;
            prev = cur;
            cur = nxt;
            nxt = temp;
        }
        cur->next = prev;
        
        return cur;
    }
};