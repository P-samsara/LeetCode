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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
		ListNode* end = result;
		while(l1!=NULL && l2!=NULL)
		{
			ListNode* tmp = new ListNode(l1->val>l2->val ? l2->val : l1->val);
			if(l1->val <= l2->val)
				l1 = l1 -> next;
			else 
				l2 = l2 -> next;
			end -> next = tmp;
			end = end -> next;
		}
		if(l1==NULL)
		{
			end -> next = l2;
		}
		if(l2==NULL)
		{
			end -> next = l1;
		}
		return result -> next;
			
		
    }
};