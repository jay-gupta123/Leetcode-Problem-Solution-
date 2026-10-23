class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        vector<int> pair = {0,0};
        set<vector<int>> st;
        int n = grid.size();
        int m = grid[0].size();
        st.insert(pair);
        while(true){
            int next_r = pair[0];
            int next_c = pair[1];
            if( grid[pair[0]][pair[1]]== 'R'){
               next_c +=1;
            }
            else if(grid[pair[0]][pair[1]] == 'L'){
               next_c -=1;
            }
            else if(grid[pair[0]][pair[1]] == 'D'){
                 next_r +=1;
            }
            else{
                 next_r -=1;
            }

            if(next_r <0 || next_r >= n || next_c < 0 || next_c >= m || st.find({next_r,next_c}) != st.end() ) break;
            pair = {next_r,next_c};
            st.insert(pair);
        }
        return pair;
    }
};