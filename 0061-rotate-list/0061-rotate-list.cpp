
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr)
            return head;

        int len = 0;
        ListNode* temp = head;

        
        while(temp != nullptr) {
            len++;
            temp = temp->next;
        }

       
        int n = k % len;

        
        if(n == 0) return head;

        temp = head;
        ListNode* prev = nullptr;
        int count = 0;

        while(count < len - n) {
            count++;
            prev = temp;
            temp = temp->next;
        }

       
        ListNode* curr = temp;

        while(curr->next != nullptr) {
            curr = curr->next;
        }

        
        curr->next = head;

      
        prev->next = nullptr;

        return temp;
    }
};

