class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int maxi = INT_MIN;
        int num1=-1,num2=-1;
        for(int i=0;i<nums.size();i++){
           
            
            for(int j=0;j<nums.size();j++){
                if(nums[i] > nums[j] && nums[i] + nums[j] == target){
                  int  pr = nums[i]*nums[j];
                    if(maxi<pr){
                        maxi = pr;
                        num1 = i;
                        num2=j;
                    }
                }
            }

        }
        return {num1,num2};
        

    }
};