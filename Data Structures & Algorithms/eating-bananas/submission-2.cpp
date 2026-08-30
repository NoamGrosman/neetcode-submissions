class Solution {
public:
    long long hoursNeeded (vector<int>& piles, int k) {
        long long hours = 0;
        for (int it : piles) {
            hours += it / k + (it % k != 0);
        }
        return hours;
    }  


    int minEatingSpeed(vector<int>& piles, int h) {
        int maxP = 0;
        int minP = 1;

        for (int it : piles) {
            if (it > maxP) maxP = it;
        };

        while (minP < maxP) {
            int mid = (minP + maxP) / 2;
            long long hours = hoursNeeded(piles, mid);
            if (hours > h) {
                minP = mid + 1;
            } else {
                maxP = mid;
            }
        }
        return minP;
    }
};

// We are guarenteed that there is always a solution.
// k needs to be between the minimum of the array and the maximum of the array.