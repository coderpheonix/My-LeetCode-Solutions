class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlength=1,inclength=1,declength=1;
        int n= nums.size();

        for (int i=1; i<n; i++)
        {
            if (nums[i]>nums[i-1])
            { // If the current element is greater than the previous, we are in an increasing sequence
                inclength++;
                declength=1;
            }
            else if (nums[i]<nums[i-1])
            { // If the current element is less than the previous, we are in a decreasing sequence
                declength++;
                inclength=1;
            }
            else
            {
// If the current element is equal to the previous, reset both counts to 1
                inclength=declength=1;
            }
// Update the maximum length of either the increasing or decreasing subarray
            maxlength= max(maxlength,max(inclength,declength));
        }

       return maxlength;
    }
};
