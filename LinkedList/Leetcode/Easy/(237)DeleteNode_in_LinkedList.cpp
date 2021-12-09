class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode* p = node;
       ListNode* q = node->next;
       ListNode* prev = node;
        
       while(q!=NULL){
           prev = p;
           p->val = q->val;
           p = p->next;
           q = q->next;
       }
       prev->next = NULL;
        delete(p);
        delete(q);
               
    }
};
