class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int ans=0,rows=maze.size(),cols=maze[0].size(),len,currLen,next_row,next_col;
        vector<vector<bool>> visit(rows,vector<bool>(cols,false));
        vector<vector<int>> directions={{-1,0},{0,-1},{0,1},{1,0}};
        queue<pair<int,int>> bfs;


        bfs.push({entrance[0],entrance[1]});
        visit[entrance[0]][entrance[1]]=true;

        while(bfs.size()>0) {
            len=bfs.size();
            currLen=0;
            ans++;
            while(currLen<len) {
                auto it=bfs.front();
                bfs.pop();
                for(int index=0;index<directions.size();index++) {
                    next_row=it.first+directions[index][0];
                    next_col=it.second+directions[index][1];
                    
                    if(next_row<0 || next_row>=rows || next_col<0 || next_col>=cols || visit[next_row][next_col] || maze[next_row][next_col]=='+')
                        continue;
                    
                    if(next_row==0 || next_row==rows-1 || next_col==0 || next_col==cols-1)
                        return ans; 
                    //cout<<next_row<<" "<<next_col<<" "<<ans<<endl;
                    visit[next_row][next_col]=true;
                    bfs.push({next_row,next_col});
                }
                currLen++;
            }
            
        }
        return -1;
    }
};