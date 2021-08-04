class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head){
            return nullptr;
        }
        ListNode *h1=head,*h2=head;
        while(h1!=nullptr){
            if(n--<0){
                h2=h2->next;
            }
            h1=h1->next;
        }
        if(n==0){
            head=head->next;
        }else{
            h2->next=h2->next->next;
        }
        return head;
    }
};
