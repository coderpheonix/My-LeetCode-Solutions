class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int left=0, right=people.size()-1, counter=0;

        while(left<=right)
        {
            if (people[left]+people[right]<=limit) // check the peple is less than or equal to the sum
            {
                left++;
                right--;
            }
            else {
                right--;
            }
            counter++;

        }
    return counter;

    }
};
