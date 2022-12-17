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
    
    int binaryDecimal(string s){
        int dec=0;
        int base=1;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') dec+=base;
            base*=2;
        }
        return dec;
    }
    /*
    int binaryDecimal(string s){
        int n=s.size();
        int ans=0,base=1;
        //int num= stoi(s);  //int(s);
        for(int i=n-1;i>=0;i--){
            int x=int(s[i]);
            ans=ans+ x*base;
            base = base*2;
        }
        return ans;    
    }*/
    
    
    
    
    int getDecimalValue(ListNode* head) {
       string s;
        while(head!=NULL){
            int data=head->val;
            char x= (data==1)? '1':'0';
            s=s+x;    //Concating String chARACTER By characte
            head=head->next;
        }
        int ans=binaryDecimal(s);
        return ans;
    }
};