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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp){
            count += 1;
            temp = temp->next;
        }
        temp = head;
        while(true){
            if(count%2 == 0 && !head->next->next) break;
            else if(count%2 == 1 && !head->next) break; 
            while(temp->next->next){
            temp = temp->next;
            }
            temp->next->next = head->next;
            head->next = temp->next;
            temp->next = nullptr;
            head = head->next->next;
            temp = head;
            if(!head) break;
        }
        
    }
};
