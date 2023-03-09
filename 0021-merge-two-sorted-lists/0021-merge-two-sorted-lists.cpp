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
        if(!list1) return list2;
        if(!list2) return list1;
        
        ListNode *head = new ListNode();
        
        ListNode *temp = head;
        
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                temp->val = list1->val;
                list1 = list1->next;
            }
            else{
                temp->val = list2->val;
                list2 = list2->next;
            }
            temp->next = new ListNode();
            temp = temp->next;
        }
        
        while(list1 != NULL){
            if(list1->next == NULL){
                temp->val = list1->val;
                list1 = list1->next;
                temp->next == NULL;
                temp = temp->next;

            }
            else{
                temp->val = list1->val;
                list1 = list1->next;
            temp->next = new ListNode();
            temp = temp->next;
            }
        }
        while(list2 != NULL){
            if(list2->next == NULL){
                temp->val = list2->val;
                list2 = list2->next;
                temp->next == NULL;
                temp = temp->next;

            }
            else{
                temp->val = list2->val;
                list2 = list2->next;
            temp->next = new ListNode();
            temp = temp->next;
            }
        }
        
        return head;        
    }
};