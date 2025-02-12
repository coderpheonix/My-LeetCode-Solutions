
class Solution {
public:
    int getSum(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums)
    {
        int ans = -1;
        unordered_map<int, int> mp; // Map of digit sum → max number

        for (int num : nums)
            {
            int sum = getSum(num);

            if (mp.find(sum) != mp.end())
            {
                ans = max(ans, num + mp[sum]);
            }

            mp[sum] = max(mp[sum], num);
        }
        return ans;
    }
};
