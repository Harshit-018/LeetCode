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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        int l=0;
        while(head){
            l++;
            head=head->next;
        }
        
        int bucketSlot = l/k;
        int extraElement = l%k;
        
        ListNode* prev=NULL;
        
        vector<ListNode*> result(k,NULL);
        
        for(int i=0; curr && i<k; i++){
            result[i]= curr;
            
            for(int count=1; count <= bucketSlot + (extraElement>0 ? 1 : 0); count++){
                prev=curr;
                curr=curr->next;
            }
            prev->next=NULL;
            extraElement--;
        }
        
        return result;
    }
};