/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution1 {
public:
    ListNode *detectCycle(ListNode *head) {
        //Bruete Force Approach
        unordered_set<ListNode*>st;
        ListNode* temp =head;
        while(temp && temp->next){
            if(st.find(temp) != st.end()){ return temp;}
            else st.insert(temp);
            temp=temp->next;

        }
        return nullptr;
    }
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast ->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                ListNode* p = head;
                while( p != slow){
                    p = p->next;
                    slow = slow->next;
                }
               return slow;
            }
        }
        return nullptr;
    }
};