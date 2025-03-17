class Solution {
public:
    bool divideArray(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i+=2)
       {
        if(nums[i]!=nums[i+1])
        {
            return false;
        }
       }
       return true;
    }
};





class Solution {
public:
    bool divideArray(std::vector<int>& nums) {
        std::unordered_map<int, int> count;

        // Count occurrences of each number
        for (int num : nums)
        {
            count[num]++;
        }

        // Check if every number appears an even number of times
        for (const auto& pair : count)
            {
            if (pair.second % 2 != 0)
            {
                return false;
            }
        }

        return true;
    }
};
