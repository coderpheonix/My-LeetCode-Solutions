class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1; // calculate the maximum elemts size of the array


        // Binary search to find the minimum element
        while (left<right)
        {
            int mid=left+(right-left)/2;

            if(nums[left]<nums[right])
            {
                return nums[left];
            }
           if (nums[mid] >= nums[left])
            {
               left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
    return nums[left];
    }
};
