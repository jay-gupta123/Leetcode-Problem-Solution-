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

    ListNode* findmiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
     ListNode* mergetwoll(ListNode* list1,ListNode* list2){
        ListNode* dumyNode = new ListNode(0); 
        ListNode* temp = dumyNode;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
            if(list1) temp->next = list1;
            else temp->next = list2;
            
        }
        return dumyNode->next;

     }
    ListNode* sortList(ListNode* head) {
        //in this we divide the original linked list into subpart unitll we get separate 
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* middleNode = findmiddle(head);
        ListNode* lefthead = head;
        ListNode* righthead = middleNode->next;
        middleNode->next = nullptr;
        lefthead = sortList(lefthead);
        righthead = sortList(righthead);
        return mergetwoll(lefthead,righthead);
    }
};

