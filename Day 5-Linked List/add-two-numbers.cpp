#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)
            return l1;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        int sum,carry=0;
        
        ListNode *head,*curr;
        bool flag = true;
        
        while(l1 || l2) {
            sum = carry;
            if(l1) {
                sum = sum+l1->val;
                l1=l1->next;
            }
            
            if(l2) {
                sum = sum+l2->val;
                l2=l2->next;
            }
            
            if(flag) {
                curr = new ListNode(sum%10);
                head = curr;
                flag = false;
            } else {
                curr->next = new ListNode(sum%10);
                curr=curr->next;
            }
            carry = sum/10;                
        }
        if(carry>0) {
            curr->next = new ListNode(carry);
            curr=curr->next;
        }
        return head;
    }
};