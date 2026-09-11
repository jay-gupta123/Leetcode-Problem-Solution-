class Solution1 {   //Brute force
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int pr=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    pr*=nums[j];
                }
            }
            ans.push_back(pr);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
       long long pr=1;
       int zero=0;
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0) zero++;
        else pr*=nums[i];
       }
       vector<int>ans(n,0);
       if(zero>1) return ans;
       else if(zero==1){
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ans[i]=pr;
                break;
            }
        }
       }
        else{
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    ans[i]=pr/nums[i];
                }
            }
        }
        return ans;

    }

};