class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> umap;
        for(char sum :magazine)
        {
            umap[sum]++;
        }
        for (char sum :ransomNote)
        {
            if (umap[sum]==0)
            return false;
            umap[sum]--;
        }
        return true;
    }
};
