#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) return true; // Found a duplicate
            seen.insert(num);
        }

        return false; // No duplicates found
    }
};







class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // O(n log n)

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) return true;
        }

        return false;
    }
};






class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // O(n log n)

        int left = 0;
        int right = 1; // Start from second element

        while (right < nums.size()) {
            if (nums[left] == nums[right]) {
                return true; // Duplicate found
            }
            left++;
            right++;
        }

        return false; // No duplicates
    }
};
