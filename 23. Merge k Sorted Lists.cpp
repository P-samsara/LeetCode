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
    ListNode* mergeTwoLists(vector<ListNode*>& lists, int start, int end1) {
            if(start == end1)
                return lists[start];
            int mid = start + (end1 - start)/2;
            ListNode* l1 = mergeTwoLists(lists,start,mid);
            ListNode* l2 = mergeTwoLists(lists,mid+1,end1);
        
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
        
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        if(lists.size()==1)
            return lists[0];
        return mergeTwoLists(lists,0,lists.size()-1);
    }
};