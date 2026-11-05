class Solution {
public:
    void visit(vector<vector<char>>& grid, int i, int j){
        if(i > grid.size() - 1 || j > grid[0].size() - 1 || i == -1 || j == -1){
            return;
        }
        if(grid[i][j] == '1'){
            grid[i][j] = '0';
            visit(grid, i, j -1);
            visit(grid, i - 1, j);
            visit(grid, i + 1, j);
            visit(grid, i, j+ 1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    visit(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};
