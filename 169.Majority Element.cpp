class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // i is the count for tracking the majority candidate
        int i = 0;

        // j is the variable to store the current majority candidate
        int j = 0;

        // Boyer-Moore Voting Algorithm: This loop determines the majority element
        for (int num : nums) {
            // If count 'i' becomes 0, assign the current element 'num' as the new candidate
            if (i == 0) {
                j = num;
            }
            // If 'num' is the current candidate 'j', increment the count
            // Otherwise, decrement the count
            i += (num == j) ? 1 : -1;
        }

        // Return the candidate which is the majority element
        return j;
    }
};

