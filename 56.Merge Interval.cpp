class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return {};

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged = {intervals[0]};

        for (const auto& i : intervals) {

            if (i[0] <= merged.back()[1])
                merged.back()[1] = max(merged.back()[1], i[1]);
            else
                merged.push_back(i);
        }

        return merged;
    }
};
