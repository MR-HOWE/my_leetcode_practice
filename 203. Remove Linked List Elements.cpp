/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*问题 
 Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5
*/
class Solution {//删除链表所有的特定元素的难点在于如何处理链表头 
public:
    ListNode* removeElements(ListNode* head, int val) {
    	if(head == NULL)    return head;//一开始少了这一点，坑爹。 
        ListNode* temp1;
        ListNode* temp2;
    	temp1 = head;
    	temp2 = head; 
        while(temp2 -> next != NULL)
        {
        	temp1 = temp2;
	        temp2 = temp2 -> next;
        	if(temp2 -> val == val)
        	{
        		temp1 -> next = temp2 -> next;
				temp2 = temp1;
			}
		}
		if(head -> val == val)//技巧，当指针指到结尾时已经除去了除一个数之外的val，
		//此时再考虑第一个结点的值。 
		{
		    return head -> next;
		}
		return head;
    }
};
//或者，一开始可以做一个伪表头. 
	//ListNode dummy = new ListNode;
	//dummy.next = head;
	
/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }
};
最最丧心病狂的答案！！！用递归！！！ 
*/
