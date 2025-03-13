class Solution {
public:
    bool check(vector<vector<int>>& grid,int row,int col,int value)
    {
        if(row<0||col<0||row>=grid.size()||col>=grid.size()||grid[row][col]!=value)
        return false;
        
        if(value==(grid.size()*grid.size())-1)
        return true;
        
        bool ans1=check(grid,row+2,col+1,value+1);
        bool ans2=check(grid,row+1,col+2,value+1);
        bool ans3=check(grid,row+1,col-2,value+1);
        bool ans4=check(grid,row-2,col+1,value+1);
        bool ans5=check(grid,row-2,col-1,value+1);
        bool ans6=check(grid,row-1,col-2,value+1);
        bool ans7=check(grid,row-1,col+2,value+1);
        bool ans8=check(grid,row+2,col-1,value+1);
        
    return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return check(grid,0,0,0);
    }
};
