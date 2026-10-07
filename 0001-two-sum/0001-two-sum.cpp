class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first, second;
        int found = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if ((nums[i] + nums[j] == target) && (i != j)) {
                    first = i;
                    second = j;
                    found++;
                }
            }
            if (found == 1)
                break;
        }
        return {first, second};
    }
};
