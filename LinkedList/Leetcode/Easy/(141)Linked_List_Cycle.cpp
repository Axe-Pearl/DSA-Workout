class Solution {
public:
    bool hasCycle(ListNode *head) {
      if(head==NULL) return false;
      ListNode* slow_pointer = head;
      ListNode* fast_pointer = head;
      while(fast_pointer->next!=NULL && fast_pointer->next->next!=NULL){
          slow_pointer = slow_pointer->next;
          fast_pointer = fast_pointer->next->next;
          if(slow_pointer == fast_pointer){
              return true;
          }
      }
      return false;
    }
};
