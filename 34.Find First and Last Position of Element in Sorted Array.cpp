class Solution {
public:
    // Function to find the first occurrence of the target
    int findFirst(vector<int>& nums, int target) {
        int left=0;int right=nums.size()-1;
        int first =-1;

        while (left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                first = mid;
                right=mid-1;
            }
            else if (nums[mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return first;

    }
 // Function to find the last occurrence of the target
    int findLast(vector<int>& nums, int target) {
        int left=0;int right=nums.size()-1;
        int last =-1;

        while (left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                last = mid;
                left=mid+1;
            }
            else if (nums[mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return last;

    }

    // Main function to return the first and last positions
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }
};
