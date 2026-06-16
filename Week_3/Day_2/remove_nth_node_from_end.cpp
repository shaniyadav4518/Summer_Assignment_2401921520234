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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* temp=head;
     int   count=0;
        while(temp){
            count++;
            temp=temp->next;

        }
        if(count==n){
            return head->next;
        }
        ListNode* alter=head;
        int num=0;
        while(alter){
            num++;
            if(num==count-n){
                alter->next=alter->next->next;
                break;
            }
            alter=alter->next;



        }
        return head;
    }
};