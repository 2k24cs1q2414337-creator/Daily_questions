class Solution {
private: priority_queue<int,vector<int>,greater<int>>minheap;
public:
    int findKthLargest(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            minheap.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>minheap.top()){
                minheap.pop();
                minheap.push(nums[i]);
            }
        }
        return minheap.top();
    }
};