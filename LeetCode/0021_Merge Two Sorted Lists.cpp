class Solution {
public:
    ListNode* mergeTwoLists(ListNode* q, ListNode* p) {
        if(!q)
            return p;
        if(!p)
            return q;
        if(q->val<=p->val){
            q->next=mergeTwoLists(q->next,p);
            return q;
        }else{
            p->next=mergeTwoLists(q,p->next);
            return p;
        }
    }
};
