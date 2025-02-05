class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if(s1 == s2) return true;

        int i = 0, n = max(s1.size(), s2.size());
        while(i < n and s1[i] == s2[i]) i++;

        int j = i + 1;
        while(j < n and s1[j] == s2[j]) j++;

        swap(s1[i], s1[j]);

        return s1 == s2;
    }
};



// Approch-2
class Solution {
public :
bool areAlmostEqual(string s1, string s2) {
    int n = s1.length();
    int first = -1, second = -1;

    // Find mismatching indices
    for (int i = 0; i < n; i++)
        {
        if (s1[i] != s2[i])
        {
            if (first == -1) first = i;
            else if (second == -1) second = i;
            else return false;  // More than 2 mismatches
        }
    }

    // If no mismatches, or exactly 2 mismatches that can be swapped
    return (first == -1) || (second != -1 && s1[first] == s2[second] && s1[second] == s2[first]);
};

