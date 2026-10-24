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
    ListNode* reverse(ListNode* head,ListNode* null1){
        ListNode* temp = head;
        ListNode* prev = null1;
        while(temp != null1){
            ListNode* nextG = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextG;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 0) return head;
        ListNode* temp = head;
        ListNode* tempH = temp;
        ListNode* prevH = nullptr;
        int cnt = 0;
        while(temp != nullptr){
            temp  = temp->next;
            cnt ++;
            if(cnt == k){
                ListNode* newGroup = temp;
                ListNode* newHead = reverse(tempH,temp);
                if(tempH == head){
                    head = newHead;
                }
                else{
                    prevH->next = newHead;
                }
                 prevH  = tempH;
                 tempH = newGroup;
                  cnt =0;

            }
           
        }
        if(prevH != nullptr){
            prevH->next = tempH;
        }
        return head;
        
    }
};