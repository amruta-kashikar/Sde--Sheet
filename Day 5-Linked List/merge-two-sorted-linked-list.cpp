#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummyHead = new ListNode();
        ListNode* tail = dummyHead;
        
        while(list1 !=NULL && list2!=NULL)
        {
            if(list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
                tail = tail->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
                tail = tail->next;
            }
            
        }
        tail->next = (list1!=NULL)? list1 : list2;
        return dummyHead->next;
        
    }
};