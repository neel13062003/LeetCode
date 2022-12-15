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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //Single Element
        /*
        if(head->next == NULL){
            return head;
        }
        //Start From Second
        ListNode *curr= head->next;
        ListNode *prev=head;
        head->next=NULL;
        
        while(curr!=NULL){
         
            ListNode *nextNode= curr->next;
            curr->next= prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;*/
        
        
        
        ListNode *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
        
        
        
    }
};