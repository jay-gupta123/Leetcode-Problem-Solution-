class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i] = pow(nums[i],2);
        }
        long long sum1=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            sum1 += nums[i]; 
        }
        long long sum2 = 0;
        for(int i=n/2;i<n;i++){
            sum2+=nums[i];
        }
        return sum2-sum1;
    }
};