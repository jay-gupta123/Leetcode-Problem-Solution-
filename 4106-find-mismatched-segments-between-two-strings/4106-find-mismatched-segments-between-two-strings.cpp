class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        string first="";
        string second = "";
        for(int i=0;i<s1.size();i++){
           if(s1[i] == s2[i]){
               if(first.size()>0){
                ans.push_back({first,second});
               }
               first = "";
               second = "";
            }
           else if(s1[i] != s2[i]){
                first.push_back(s1[i]);
                second.push_back(s2[i]);
            }
            

        }
        if(first.size()>0){
            ans.push_back({first,second});
        }
        
        return ans;


    }
};