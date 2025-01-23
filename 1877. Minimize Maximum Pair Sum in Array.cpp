class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort The given array

        int left=0;  // first pointer is index 0
        int right=nums.size()-1;  // Second pointer is the last index
        int result=0;

        while(left<right)
        {
            int sum = nums[left]+nums[right]; // calculate the two value
            result= max(result, sum); // pic the max value
            left++;
            right--;
        }
    return result;
    }
};
