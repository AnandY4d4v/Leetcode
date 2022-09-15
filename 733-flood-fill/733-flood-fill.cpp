class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int pc=image[sr][sc];
        queue<pair<int,int> >q;
        q.push({sr,sc});
        int m=image.size();
        int n=image[0].size();
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        image[sr][sc]=color;
        while(!q.empty()){
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0 || nx>=m || ny<0 || ny>=n || image[nx][ny]!=pc || image[nx][ny]==color) continue;
        image[nx][ny]=color;
        q.push({nx,ny});
        }
            
        } 
        return image;
    }
};