#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        
        ListNode* prev = NULL;
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
};