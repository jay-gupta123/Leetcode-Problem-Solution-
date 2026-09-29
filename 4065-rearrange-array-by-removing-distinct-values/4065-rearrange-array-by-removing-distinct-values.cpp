class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto it:nums){
            mp[it]++;
        }

        vector<int> ans;
        while(true){
            vector<int> temp;
            bool r = false;
            for(auto &it : mp){
                if(it.second>0){
                    temp.push_back(it.first);
                    it.second -=1;
                    r = true;
                }
            }
            if(!r) break;
            sort(temp.begin(),temp.end());
            for(auto it:temp){
                ans.push_back(it);
            }

        }
        return ans;
    }
};