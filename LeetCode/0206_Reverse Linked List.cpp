class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return nullptr;
        vector<ListNode*> pool={};
        while(head){
            pool.push_back(head);
            head=head->next;
        }
        for(int i=pool.size()-1;i>0;i--){
            pool[i]->next=pool[i-1];
        }
        pool[0]->next=nullptr;
        return pool[pool.size()-1];
    }
};
