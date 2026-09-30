// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n == 1) {
            return 1;
        }

        int check;
        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int bad = isBadVersion(mid);
            if (bad == true) {
                check = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return check;
    }
};