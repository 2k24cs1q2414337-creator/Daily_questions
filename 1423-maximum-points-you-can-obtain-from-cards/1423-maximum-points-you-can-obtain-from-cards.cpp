class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        int rsum = 0;
        for (int i = 0; i < k ; i++) {
            lsum += cardPoints[i];
        }

        int max_Sum = lsum;
        int rad = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];

            rsum += cardPoints[rad];
            rad--;

            max_Sum = max(max_Sum, (lsum + rsum));
        }
        return max_Sum;
    }
};