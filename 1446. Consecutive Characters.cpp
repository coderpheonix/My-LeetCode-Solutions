class Solution {
public:
    int maxPower(string s) {
        int maxsize=1;
        int counter=1;
        int n=s.length();

        for (int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                counter ++;
            }
            else
            {
                maxsize= max(maxsize, counter);
                counter=1;
            }
        }
    maxsize= max(maxsize, counter);
    return maxsize;

    }
};
