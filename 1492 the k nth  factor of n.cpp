class Solution {
public:
    int kthFactor(int n, int k) {

        int count =0;

        for (int i=1;i<=n; i++)
        {
            if(n%i==0) // Check if 'i' is a factor of 'n'
            count ++; // Increment count for each factor


            if (count==k) // If we have found the k-th factor
            {
                return i;
            }
        }

      return -1; // If less than k factors are found

    }
};
