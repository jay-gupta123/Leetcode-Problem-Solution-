class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    //    int i=0,n=nums.size();
    //    for(int j=i+1;j<nums.size();j++){
    //     if(nums[i]+nums[j]==target){
    //        return {i,j}; 
    //     }                                            //bruete force
    //     else{
    //         if(j==n-1){
    //             i++;
    //             j =i;
    //         }
    //     }
    //    }
        
    map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        int a=nums[i];
        int more=target-a;                //better aproch
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]=i;
    }
    return {};

    }

};