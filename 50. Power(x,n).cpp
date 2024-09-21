
class Solution {
public:
    double myPow(double x, int n) {
        double result = 0;
        if (x==0) return 0;
        else
        {
             result = pow(x,n);
        }

        return result;
    }
};
