/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:  
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* curr = NULL;
        
        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                ListNode* temp = new ListNode(list1->val);
                
                if(head == NULL) {
                    head = temp;
                    curr = head;
                } else {
                    curr->next = temp;
                    curr = temp;
                }
                list1 = list1->next;
            } 
            else if (list1->val > list2->val) {
                ListNode* temp = new ListNode(list2->val);
                
                if(head == NULL) {
                    head = temp;
                    curr = head;
                } else {
                    curr->next = temp;
                    curr = temp;
                }
                list2 = list2->next;
                
            } else {
                ListNode* temp = new ListNode(list1->val);
                ListNode* temp2 = new ListNode(list2->val);
                
                if(head == NULL) {
                    head = temp;
                    curr = head;
                } else {
                    curr->next = temp;
                    curr = temp;
                }
                curr->next = temp2;
                curr = temp2;
                list1 = list1->next;
                list2 = list2->next;
            }
        }
        
        if(list1!=NULL && list2==NULL) {
            if(curr == NULL) {
                return list1;
            } else {
                curr->next = list1;
            }
        }
        if(list1==NULL && list2!=NULL){
            if(curr == NULL) {
                return list2;
            } else {
                curr->next = list2;
            }
        }
        
        return head;
    }
};