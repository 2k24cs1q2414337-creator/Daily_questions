class Solution {
public:
void dfs(vector<vector<int>>& image,int r,int c,int oc,int newcolor){
    if(r<0 || r>=image.size() || c<0 || c>=image[0].size() || image[r][c]!=oc){
        return;
    }
        image[r][c]=newcolor;
        dfs(image,r-1,c,oc,newcolor);
        dfs(image,r+1,c,oc,newcolor);
        dfs(image,r,c-1,oc,newcolor);
        dfs(image,r,c+1,oc,newcolor);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oc=image[sr][sc];
        if(oc!=color){
            dfs(image,sr,sc,oc,color);
        }
        return image;
        }
    };