class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> winner;
        map<int,int> loser;
        for(int i=0;i<matches.size();i++){
            auto it = matches[i];
            winner[it[0]] +=1;
            loser[it[1]] +=1;
        }
        vector<int>l2;
        for(auto it:loser){
            if(it.second == 1){
                l2.push_back(it.first);
            }
        }
        vector<int> l1;
        for(auto it:winner){
            if(loser.find(it.first) == loser.end()){
                l1.push_back(it.first);
            }
        }
        vector<vector<int>> ans = {l1,l2};
        
        return ans;
    }
};