/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:

    ListNode* reverse(ListNode* ptr) {
        ListNode* pre=NULL;
        ListNode* nex=NULL;
        while(ptr!=NULL) {
            nex = ptr->next;
            ptr->next = pre;
            pre=ptr;
            ptr=nex;
        }
        return pre;

        //By this time pre is pointing to the last node of the list
        //pre is used to keep track of the previous node so that the link can be reversed 
        //Nex is used to keep track of node ahead of the pointer ptr so that we can move the ptr to the node ahead. Note we cannot move the ptr ahead by doing ptr->next because ptr's next will change upon reversing the links

    };

    bool isPalindrome(ListNode* head) 
    {
        //The first thing we can do is we can do is we can store the values of the list in an array and check if the array is an palindrome or not
        // vector<int> arr;
        // while(head != NULL)
        // {
        //     arr.push_back(head->val);
        //     head = head->next;
        // }

        // for(int i =0;i<arr.size()/2;i++)
        // {
        //     if(arr[i] != arr[arr.size()-i-1])
        //     {
        //         return false;
        //     }
        // }
        // return true;

        //The optimmized approach

        ListNode *slow = head;
        ListNode *fast = head;

        //Our first step is to find the mid of the list using the two pointers

        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // By this time the slow pointer points to the middle node of list
        //Now we need to reverse the list from the next of the slow pointer to the last of the list
        //The pre returned is the pointer to the last node of the list.

        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* dummy = head;
        //Now we compare the first half and the second half of the list simulatneously to check for a palindrome 
        
        while(slow!=NULL) {
            if(dummy->val != slow->val) return false;
            dummy = dummy->next;
            slow = slow->next;
        }
        return true;
    }     
};        