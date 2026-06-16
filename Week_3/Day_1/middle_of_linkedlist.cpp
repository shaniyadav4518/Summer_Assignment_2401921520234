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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;

        }
        ListNode* alter=head;
        int bro=0;
        while(alter){
            bro++;
            if( count%2!=0 && bro==(count+1)/2){
                return alter;
            }
            if(count%2==0 && bro==(count/2)+1){
                return alter;
            }
            alter=alter->next;




        }
       return alter;
    }
};