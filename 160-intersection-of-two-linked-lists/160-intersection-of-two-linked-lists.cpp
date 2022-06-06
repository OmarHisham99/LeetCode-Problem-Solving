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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *result =0;
        bool found = false;
        ListNode *tmpA = headA ; 
        ListNode *tmpB = headB; 
        while(tmpA!=NULL){
        while(tmpB!= NULL){
            if(tmpB==tmpA){
                result = tmpB;
                found = true; 
                break; 
            }
            tmpB = tmpB->next; 
            
        }
        if(found) break; 
        tmpB = headB; 
        tmpA=tmpA->next; 
    }
        return result; 
    }
        
};