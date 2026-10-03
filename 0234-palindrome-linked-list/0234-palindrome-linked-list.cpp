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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

  
        //Find the middle of LinkedList
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

       // # Reverse the second half
        ListNode* prev = NULL;
        ListNode* front = NULL;
        while(slow){
            front = slow->next;
            slow->next = prev;
            prev = slow;
            slow = front;
        }

        while(prev){
            if(head->val != prev->val){
                return false;
            }
        
                
                 head=head->next;
                prev=prev->next;
            
        }
        return true;

        
    }
};