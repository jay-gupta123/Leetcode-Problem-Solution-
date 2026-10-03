class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        int n = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = reverse(slow);

        ListNode* temp1 = head;
        ListNode* temp2 = prev->next;

        int i = 0;
        while (temp1 != nullptr && temp2 != nullptr && i < n / 2) {
            if (temp1->val != temp2->val) {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            i++;
        }

        return true;
    }
};