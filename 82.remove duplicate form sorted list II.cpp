class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Create a dummy node that helps manage the head of the list
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;  // This will track the last non-duplicate node

        while (head != nullptr) {
            // Check if the current node has duplicates
            if (head->next != nullptr && head->val == head->next->val) {
                // Skip all nodes with the same value
                while (head->next != nullptr && head->val == head->next->val) {
                    head = head->next;
                }
                // Connect prev node to the node after the duplicates
                prev->next = head->next;
            } else {
                // No duplicates, move prev pointer
                prev = prev->next;
            }
            // Move head to the next node
            head = head->next;
        }

        // Return the head of the modified list
        return dummy->next;
    }
};

