class Solution {
public:
    int countConsistent(vector<int>& nums) {
       int n = nums.size();
       int cnt =0 ;
       for(int i=0;i<nums.size();i++){
        int num = nums[i];
        int mini = nums[i];
        for(int j=i;j<nums.size();j++){
            num = num & nums[j];
            mini = min(mini,nums[j]);
            if(mini == num) cnt+=1;
        }
       }
       return cnt;
        
    }
};