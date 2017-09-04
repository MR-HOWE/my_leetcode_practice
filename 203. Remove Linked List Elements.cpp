/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*���� 
 Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5
*/
class Solution {//ɾ���������е��ض�Ԫ�ص��ѵ�������δ�������ͷ 
public:
    ListNode* removeElements(ListNode* head, int val) {
    	if(head == NULL)    return head;//һ��ʼ������һ�㣬�ӵ��� 
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
		if(head -> val == val)//���ɣ���ָ��ָ����βʱ�Ѿ���ȥ�˳�һ����֮���val��
		//��ʱ�ٿ��ǵ�һ������ֵ�� 
		{
		    return head -> next;
		}
		return head;
    }
};
//���ߣ�һ��ʼ������һ��α��ͷ. 
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
����ɥ�Ĳ���Ĵ𰸣������õݹ飡���� 
*/
