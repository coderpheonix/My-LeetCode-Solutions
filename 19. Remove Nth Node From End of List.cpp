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

        // create a dummy node with value 0 befor the head for two ponter approch
        ListNode* dummy= new ListNode(0, head);
        ListNode* first= dummy;  // declare the first ptr is dummy
        ListNode* second= dummy;  // declare the second ptr is also dummy

        for(int i=0; i<=n; i++)
        {
            first=first->next; // reach the first ptr in n+1
        }

        while (first !=nullptr)
        {
            first=first->next;
            second=second->next;  // second ptr is before the n-1
        }


        // delete the nth node form the list
        ListNode* nodeToDelete=second->next;
        second->next= second->next->next;
        delete nodeToDelete;


        // Update the new node ro retern for output
        ListNode* NewNode=dummy->next;
        delete dummy;
        return NewNode;
    }
};
