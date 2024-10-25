/*
 * LeetCode Problem: Find Minimum in Rotated Sorted Array II
 * Problem ID: 154
 * Difficulty: Hard
 *
 * Problem Description:
 * Given a rotated sorted array `nums` (which may contain duplicates),
 * find the minimum element in the array.
 * The array was initially sorted in ascending order and then rotated
 * at some pivot point.
 *
 * Approach:
 * We use a modified binary search to efficiently locate the minimum element
 * in the rotated array. By comparing the middle element with the rightmost
 * element, we determine which half of the array contains the minimum:
 *
 * 1. If `nums[mid] < nums[right]`, the minimum is in the left half (inclusive).
 *    So, set `right = mid`.
 * 2. If `nums[mid] > nums[right]`, the minimum is in the right half (exclusive).
 *    So, set `left = mid + 1`.
 * 3. If `nums[mid] == nums[right]`, we decrement `right` by 1 to handle duplicates,
 *    narrowing down the search space without skipping any potential minimum.
 *
 * Complexity:
 * - Time Complexity: O(log n) on average, but in the worst case (with duplicates), it can be O(n).
 * - Space Complexity: O(1), as we use a constant amount of space.
 */

#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;


        while (left < right) {
            int mid = left + (right - left) / 2;

            // If mid element is less than right, minimum is in the left half
            if (nums[mid] < nums[right]) {
                right = mid;
            }
            // If mid element is greater than right, minimum is in the right half
            else if (nums[mid] > nums[right]) {
                left = mid + 1;
            }
            // If nums[mid] == nums[right], move right pointer to handle duplicates
            else {
                right--;
            }
        }
        return nums[left];
    }
};

