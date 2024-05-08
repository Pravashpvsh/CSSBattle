/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 
 */

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode(0);
        int carry = 0;//initial carry
        ListNode *head = l3;
        while (l1 && l2)//when list 1 and 2  is equal then we use this case
        {
            int val = l1->val + l2->val + carry;// literally adding 2 linked list like for example adding l1 3 and l2 4 and as carry 0 
            carry = val / 10; // like 3+4+0=7 so now 7/10 is 0.7
            l3->next = new ListNode(val % 10);//l3 become 7%10 so 7
            l1 = l1->next;// l1 moves to 4
            l2 = l2->next;//l2 moves to 6
             l3 = l3->next;// l3 moves to next pointer for next operation
        }
        while (l1)//when list 1 is longer than l2 we use this case
        {
            int val = l1->val + carry;
            carry = val / 10;
            l3->next = new ListNode(val % 10);
            l1 = l1->next;
             l3 = l3->next;
        }
        while (l2)//when list 2 is longer than l2 we use this case
        {
            int val = l2->val + carry;
            carry = val / 10;
            l3->next = new ListNode(val % 10);
            l2 = l2->next;
             l3 = l3->next;
        }
        if (carry)//when sometimes we get edges case we use this for example no 3 
        {
            l3->next = new ListNode(carry);//after completion of every pointer adding carry if it is remain 
        }
        return head-> next;
    }
};
