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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next) return nullptr;
        int length=0;
        ListNode* temp  = head;
        while(temp != NULL){
            temp=temp->next;
            length++;
        }
        int k = (length-n);
        if(k==0){
            return head->next;
        }
        int len=0;
        temp=head;
        ListNode* prev = nullptr;
        while(len != k){
            prev= temp;
            temp=temp->next;
            
            len+=1;
        }
        prev->next = temp->next;
        return head;
    }
};