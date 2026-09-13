class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = 0;

        int i = 0;
        int j = nums.size() - 1;

        while(i < j){

            int width = j - i;
            int height = min(nums[i], nums[j]);

            ans = max(ans, width * height);

            if(nums[i] < nums[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return ans;
    }
};