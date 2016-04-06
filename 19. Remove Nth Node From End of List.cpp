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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head;
		ListNode* q = head;
		while(n!=0)
		{
			q = q -> next;
			n --;
		}
		if(q==NULL)
			return head -> next;
		while(q->next!=NULL)
		{
			p = p -> next;
			q = q -> next;
		}
		p -> next = p -> next -> next;
		return head;
    }
};