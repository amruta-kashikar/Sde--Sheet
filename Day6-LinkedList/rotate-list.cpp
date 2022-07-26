#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k<=0 || head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* last= head;
        int length = 1;
        while(last->next!=NULL)
        {
            last = last->next;
            length++;
        }
        last->next = head;
        int rotations = k%length;
        int skip = length - rotations;
        
        ListNode* newLast = head;
        for(int i=0;i<skip-1;i++)
        {
            newLast = newLast->next;
        }
        
        head = newLast->next;
        newLast->next = NULL;
        
        return head;
    }
};