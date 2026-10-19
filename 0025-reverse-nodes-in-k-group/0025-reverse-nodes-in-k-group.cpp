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
    ListNode* reverse(ListNode* head, ListNode* null1) {
        ListNode* prev = null1;
        ListNode* curr = head;

        while (curr != null1) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) {
            return head;
        }

        ListNode* prevH = nullptr;
        ListNode* temp = head;
        ListNode* tempH = temp;
        int cnt = 0;
        bool flag = false;

        while (temp != nullptr) {
            ListNode* prev = temp;
            temp = temp->next;
            cnt++;

            if (cnt == k) {
                ListNode* nextGroup = temp;

                ListNode* newHead = reverse(tempH, temp);

                if (flag == false) {
                    head = newHead;
                    flag = true;
                } else {
                    prevH->next = newHead;
                }

                prevH = tempH;
                tempH = nextGroup;
                cnt = 0;
            }
        }

       
        if (prevH != nullptr) {
            prevH->next = tempH;
        }

        return head;
    }
};