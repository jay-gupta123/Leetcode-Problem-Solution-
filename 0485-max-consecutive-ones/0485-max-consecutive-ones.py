class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        count = 0
        maxi = float('-inf')
        for i in range(len(nums)):
            count +=1
            if nums[i] == 0:
                count = 0
            
            maxi = max(maxi,count)
            
        return maxi
        