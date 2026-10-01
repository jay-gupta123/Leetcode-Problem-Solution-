class Solution {
public:
    int maxArea(vector<int>& nums) {
          int left_max = 0;
          int right_max = 0;
          int l=0;
          int r= nums.size()-1;
          int area = 0;
          while(l<r){
            left_max = max(left_max,nums[l]);
            right_max = max(right_max,nums[r]);
            int temp1=0;
            if(left_max < right_max){
                temp1 = (r-l)*left_max;
                l++;
            }
            else{
                temp1 = (r-l)*right_max;
                r--;
            }
            area = max(area,temp1);

          }
          return area; 
    }
};