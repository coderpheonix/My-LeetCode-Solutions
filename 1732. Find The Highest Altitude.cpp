class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result=0;
        int sum=0;
        for( auto i : gain)
        {
            sum+=i;
            result=max(result,sum);
        }
    return result;
    }
};
