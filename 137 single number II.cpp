class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0;
        int tows=0;
        for(int val : nums)
        {
            ones=(ones^val) & ~tows;
            tows=(tows^val) & ~ones;
        }
        return ones;
    }
};
