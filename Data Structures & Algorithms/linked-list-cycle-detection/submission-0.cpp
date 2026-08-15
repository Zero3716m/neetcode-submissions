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
    bool hasCycle(ListNode* head) {
        vector<ListNode*> arr;
        while(head != nullptr){
            for(const auto& i : arr){
                if(head == i){
                    return true;
                }
            }
            arr.push_back(head);
            head = head->next;
        }
        return false;
    }
};
