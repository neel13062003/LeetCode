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
    ListNode* merge(ListNode* a, ListNode* b){
		if(!a) return b;
		if(!b) return a;
		ListNode* c;
		if(a->val <b->val){
			c= a;
			c->next = merge( a->next, b);
		}
		else{
			c =b;
			c->next = merge(a, b->next);
		}
		return c;
	}
	
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)return head;
		ListNode *prev = head, *left=head, *right = head;
		while(head && head->next){
			head = head->next->next;
			prev = right;
			right = right->next;
		}
		prev->next = NULL;
		left = sortList(left);
		right = sortList(right);
		return merge(left, right);
    }
};