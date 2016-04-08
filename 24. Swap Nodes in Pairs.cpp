/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* result = new ListNode(0);
        ListNode* end = result;
        if(head==NULL)
            return head;
        while(head->next!=NULL)
        {
            int tmp = head -> val;
            ListNode* tmp_list1 = new ListNode(tmp);
            head = head -> next;
            tmp = head -> val;
            ListNode* tmp_list2 = new ListNode(tmp);
            end -> next = tmp_list2;
            end = end -> next;
            end -> next = tmp_list1;
            end = end -> next;
            
            head = head -> next;
            if(head == NULL)
                break;
        }
        if(head != NULL)
            end -> next = head;
        return result->next;
        
    }
};