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
    ListNode *h;
    int len=0;
    
    Solution(ListNode* head) {
        h = head;
        ListNode *temp = head;
        while(temp){
            len++;
            temp= temp -> next;
        }
    }
    
    int getRandom() {
        int r = rand() % len;
        ListNode *temp = h;

        for(int i=0; i<r; i++){
            temp = temp -> next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */