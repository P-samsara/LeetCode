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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool tag = 0;	//进位标志1
        ListNode* result = new ListNode(9);  //初始设置
		ListNode* end = result;
		while(!(l1==NULL || l2==NULL))
		{
			int temp = l1 -> val + l2 -> val + tag;
			tag = 0;
			if (temp > 9)
			{
				temp = temp % 10;
				tag = 1;
			}
			ListNode* tmplist = new ListNode(temp);
			end -> next = tmplist;
			end = end -> next;
			l1 = l1 -> next;
			l2 = l2 -> next;
		}
		if(!l1&&l2)
		{
			if(tag == 0)
				end -> next = l2;
			else
			{
				ListNode* tag1 = new ListNode(1);
				end -> next = addTwoNumbers(tag1, l2);
				tag = 0;
			}
		
		}
		if(l1&&!l2)
		{
			if(tag == 0)
				end -> next = l1;
			else
			{
				ListNode* tag1 = new ListNode(1);
				end -> next = addTwoNumbers(tag1, l1);
				tag = 0;
			}
		}
		else if(tag == 1)
		{
			ListNode* tag1 = new ListNode(1);
			end -> next = tag1;
		}
		return result -> next;
    }
};