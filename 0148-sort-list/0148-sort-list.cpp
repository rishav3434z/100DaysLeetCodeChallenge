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
    ListNode* merge(ListNode* a,ListNode* b){
        if(a==NULL) return b;
        if(b==NULL) return a;
        ListNode* c;
        if(a->val<b->val){
            c=a;
            a=a->next;
        }
        else{
            c=b;
            b=b->next;
        }
        ListNode* d = c;
        while(a!=NULL && b!=NULL){
            if(a->val<b->val){
                d->next=a;
                a=a->next;
            }
            else{
                d->next=b;
                b=b->next;
            }
            d=d->next;
        }
        if(a!=NULL) d->next = a;
        if(b!=NULL) d->next = b;
        return c;
    }
    
    ListNode* mergeSortLL(ListNode* head){
        if(head!=NULL && head->next!=NULL){
            ListNode* x = head;
            ListNode* y = head;
            while(y->next!=NULL && y->next->next!=NULL){
                x=x->next;
                y=y->next->next;
            }
            y = x;
            x = x->next;
            y->next=NULL;
            y = mergeSortLL(head);
            x = mergeSortLL(x);
            head = merge(y,x);
        }
        return head;
    }
    
    ListNode* sortList(ListNode* head) {
        return mergeSortLL(head);
    }
};