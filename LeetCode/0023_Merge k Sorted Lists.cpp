class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
            return nullptr;
        while(lists.size()>1){
            lists.push_back(mergeTwoLists(lists[0],lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists[0];
    }

    ListNode* mergeTwoLists(ListNode* q,ListNode* p){
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
