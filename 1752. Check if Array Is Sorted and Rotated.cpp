class Solution {
public:
    bool check(vector<int>& nums) {
        int length=nums.size();
        int counter =0;

        for (int i =0; i<length; i++)
        {
            if (nums[i]>nums[(i+1)%length]) counter++; //Compare with the next element wrapping around
        }
    return counter <=1;  // Return true if thre is at most one drop otherwise return false
    }


};
