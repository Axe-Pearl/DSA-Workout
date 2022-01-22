class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode();
        ListNode* res = temp;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                ListNode* node = new ListNode(list1->val);
                temp->next = node;
                temp = temp->next;
                list1 = list1->next;
            }
            else{
                ListNode* node = new ListNode(list2->val);
                temp->next = node;
                temp = temp->next;
                list2 = list2->next;
            }
        }
        while(list1!=NULL){
            ListNode* node = new ListNode(list1->val);
            temp->next = node;
            temp = temp->next;
            list1 = list1->next;     
        }
        while(list2!=NULL){
            ListNode* node = new ListNode(list2->val);
            temp->next = node;
            temp = temp->next;
            list2 = list2->next;
        }
        return res->next;
    }
};
