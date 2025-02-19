class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();

        int maxsum=0;
        int windowsum=0;

        if (n<k) return -1;

        for (int i =0; i<k; i++)

        {
            windowsum +=nums[i];
        }

        maxsum=windowsum;

        for( int j= k; j<n;j++)
        {
            windowsum +=nums[j]-nums[j-k];
            maxsum= max(maxsum, windowsum);
        }
    return (double) maxsum/k;
    }
};
