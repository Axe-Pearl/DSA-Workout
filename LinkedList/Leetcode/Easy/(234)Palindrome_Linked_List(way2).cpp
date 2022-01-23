class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        ListNode* vhead = new ListNode(head->val);
        ListNode* vhelper = vhead;
        ListNode* vtemp = NULL;
        while(curr!=NULL){
            ListNode* temp = curr->next;
            if(temp!=NULL){
            vtemp = new ListNode(temp->val);
            vhelper->next = vtemp;
            vhelper = vhelper->next;
            }
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        while(vhead!=NULL && prev!=NULL){
            if(vhead->val!=prev->val){
                return false;
            }
            prev = prev->next;
            vhead = vhead->next;
        }
       return true;
    }
};
