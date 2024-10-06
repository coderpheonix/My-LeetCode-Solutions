class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        if(str1+str2==str2+str1)
        {
            // Calculate greate common divisor
            int gcdlength= __gcd(str1.length(), str2.length());
            // return the sub string
            return str1.substr(0, gcdlength);
        }
        // return null if the logic do not flow
        return "";
    }
};
