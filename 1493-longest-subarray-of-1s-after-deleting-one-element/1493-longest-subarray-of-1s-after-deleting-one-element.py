class Solution:
    def longestSubarray(self, nums: list[int]) -> int:
        i=0
        j=0
        zero=0
        maxi = float('-inf')
        while j < len(nums):
            if nums[j] == 0:
                zero +=1
            while zero  > 1:
                if nums[i] == 0:
                    zero -=1
                i+=1
            if zero <= 1:
                length = j-i+1
                maxi = max(maxi,length)
            j+=1
        return maxi-1

        
        
        