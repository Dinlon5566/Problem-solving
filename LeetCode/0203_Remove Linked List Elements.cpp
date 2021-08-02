class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return nullptr;
        while(head&&head->val==val){
            head=head->next;
        }
        return _removeElements(head,val);
    }
    ListNode* _removeElements(ListNode* head, int val){
        if(!head)
            return nullptr;
        while(head->next&&head->next->val==val){
            head->next=head->next->next;
        }
        head->next=_removeElements(head->next,val);
        return head;
    }
};
