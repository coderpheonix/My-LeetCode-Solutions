
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;  // Index to track the new position of non-val elements
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val)
            {
                nums[i] = nums[j];  // Place the non-val element at index i
                i++;                // Increment the index
            }
        }
        return i;  // i represents the new length of the array
    }
};
