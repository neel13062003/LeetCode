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
      
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        bool f = 0;

        while (fast != nullptr and fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                f = 1;
                break;
            }
        }

        if (!f)
        {
            return nullptr;
        }

        int count = 1;
        slow = slow->next;

        while (slow != fast)
        {
            count++;
            slow = slow->next;
        }

        ListNode *start = head;
        while (count--)
        {
            start = start->next;
        }

        ListNode *x = head;

        while (x != start)
        {
            x = x->next;
            start = start->next;
        }
        return start;
    }
};