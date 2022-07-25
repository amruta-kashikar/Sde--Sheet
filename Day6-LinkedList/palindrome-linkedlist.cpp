#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    ListNode* middleNode(ListNode* head)
    {
        ListNode* s = head;
        ListNode* f = head;
        
        while(f!=NULL && f->next!=NULL)
        {
            s = s->next;
            f = f->next->next;
            
        }
        return s;
    }
    
    ListNode* reverseList(ListNode* head)
    {
        if(head==NULL)
        {
            return head;
        }
        
        ListNode* prev = nullptr;
        ListNode* present = head;
        ListNode* next = present->next;
        
        
        while(present!=NULL)
        {
            present->next = prev;
            
            prev = present;
            present = next;
            if(next!=NULL)
            {
                next = next->next;
            }
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* mid = middleNode(head);
        ListNode* headSecond = reverseList(mid);
        ListNode* rereverseHead = headSecond;
        
        while(head!=nullptr && headSecond!=nullptr)
        {
            if(head->val!=headSecond->val)
            {
                break;
            }
            head = head->next;
            headSecond = headSecond->next;
            
        }
        
        reverseList(rereverseHead);
        
        return head==nullptr || headSecond==nullptr;
    }
};