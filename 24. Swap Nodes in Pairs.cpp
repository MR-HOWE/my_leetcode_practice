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
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        ListNode* origin = head->next;
        if(head->next->next == NULL)
        {
            head->next->next = head;
            head->next = NULL;
            return origin;
        }
        ListNode* temp3 = head->next->next;
        if(head->next->next->next == NULL)
        {
            head->next->next = head;
            head->next = temp3;
            return origin;
        }
        ListNode* temp4 = head->next->next->next;
        while(1)
        {
            head->next->next = head;
            head->next= temp4;
            head = temp3;
            if(head->next->next == NULL)
            {
                head->next->next = head;
                head->next = NULL;
                return origin;
            }
            temp3 = head->next->next;
            if(head->next->next->next == NULL)
            {
                head->next->next = head;
                head->next = temp3;
                return origin;
            }
            temp4 = head->next->next->next;
        }
    }
};
JAVA 的递归方法（以后要多想想递归，真的很好用！！！） 
public class Solution {
    public ListNode swapPairs(ListNode head) {
        if ((head == null)||(head.next == null))
            return head;
        ListNode n = head.next;
        head.next = swapPairs(head.next.next);
        n.next = head;
        return n;
    }
}
