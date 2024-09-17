class Solution {
public:
    vector<long long> sumOfThree(long long num) {


        if (num%3!=0)
        {
            return{};
        }
        vector<long long> ans;
        ans.push_back((num/3)-1);
        ans.push_back(num/3);
        ans.push_back((num/3)+1);
        return ans;

    }
};
