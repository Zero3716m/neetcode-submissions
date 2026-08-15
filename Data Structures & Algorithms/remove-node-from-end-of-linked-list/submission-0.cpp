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
        int count = 0;
        ListNode* temp = head;
        ListNode* delEle;
        while(temp){
            count += 1;
            temp = temp->next;
        }
        temp = head;
        n = count - n;
        if(n == 0){
            head = head->next;
            delete temp;
            return head;
        }
        count = 1;
        while(count < n){
            temp = temp->next;
            count += 1;
        }
        delEle = temp->next;
        temp->next = temp->next->next;
        delEle->next = nullptr;
        delete delEle;
        return head;
    }
};
