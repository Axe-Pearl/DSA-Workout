class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){   
            temp = temp->next;
            length++;
        }
        int target = (length/2)+1;
       ListNode* temp1  = NULL;
        int count = 1;
        while(count!=target){
            temp1 = head;
            head = head->next;
            count++;
        }
        return head;
    }
};
