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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* result = new ListNode(0);
        ListNode* end = result;
        ListNode* head1 = head;
        bool tag = 0;
       ListNode* tmplist = new ListNode(0);
        if(head == NULL)
            return NULL;
        while(head != NULL)
        {
            //cout << head->val;
            //cout << head1 -> val;
            for(int i = 0; i < k; i++)
            {
                if(head1 == NULL)
                {    
                    tag = 1;
                    break;
                }
                
                ListNode* tmpnode = new ListNode(head1->val);
                tmpnode -> next = tmplist ->next;
                tmplist ->next = tmpnode;
                ListNode* test = tmplist;
                head1 = head1 -> next;
            }
            if(tag == 0)
            {
                
                end -> next = tmplist -> next;
                for(int i = 0; i < k; i++)
                {
                    head = head -> next;
                    end = end -> next;
                }
                tmplist = new ListNode(0);
            }
            if(tag == 1)
            {
                end -> next = head;
                return result -> next;
            }
            
        }
        return result -> next;
        
    }
};