class Solution {
public:
    typedef pair<int, pair<int,int>> P;
    vector<vector<int>> dirs = {{-1,0},{0,-1},{0,1},{1, 0}};
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        
        vector<vector<int>> result(m,vector<int>(n, INT_MAX));
        priority_queue<P, vector<P>, greater<P>> pq;
        
        pq.push({0,{0,0}});
        result[0][0] = 0;
        
        while(!pq.empty()){
            auto node = pq.top().second;
            int diff = pq.top().first;
            pq.pop();
            
            int x = node.first;
            int y = node.second;
            
            for(auto dir : dirs){
                int nx = x + dir[0];
                int ny = y + dir[1];
                
                if (nx>=0 && ny>=0 && nx<m && ny<n){
                    int newDiff = max(diff, abs(heights[nx][ny] - heights[x][y]));
                    if(result[nx][ny]>newDiff){
                        result[nx][ny] = newDiff;
                        pq.push({newDiff,{nx,ny}});
                    }
                }
            }
        }
        return result[m-1][n-1];
        
    }
};