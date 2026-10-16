class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> fm;
        for (int i : nums) {
            fm[i]++;
        }
        priority_queue<pair<int, int>> mh;
        for (auto i : fm) {
            mh.push({i.second, i.first});
        }
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(mh.top().second);
            mh.pop();
        }
        return ans;
    }
};