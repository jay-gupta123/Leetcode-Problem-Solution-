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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = new ListNode(-1);
        ListNode* temp = first;
        ListNode* i = l1;
        ListNode* j = l2;
        int carry=0;
        while(i != nullptr || j != nullptr || carry !=0 ){
            int sum =carry;
            if(i != nullptr){
                sum += i->val;
                i=i->next;
            }
            if(j != nullptr){
                sum += j->val;
                j = j->next;
            }
            carry = sum/10;
            int rem = sum%10;
            ListNode* newnode = new ListNode(rem);
            temp ->next = newnode;
            temp=temp->next;
        }
        return first->next;
    }
};