class Solution {
public:

    int getMinDistance(vector<int>& nums, int target, int start) {
        queue<int> q;
        vector<bool> visited(nums.size(),false);
        q.push(start);
        visited[start]=true;
        int dist=INT_MAX;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(nums[curr]==target){
                dist=min(dist,abs(curr-start));
                return abs(curr-start);
            }
            int left=curr-1;
            if(left>=0 && !visited[left]){
                visited[left]=true;
                q.push(left);
            }
            int right=curr+1;
            if(right<nums.size() && !visited[right]){
                visited[right]=true;
                q.push(right);
            }
        }
        return dist;
    }
};