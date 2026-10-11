class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        sum1 =0
        l = len(nums)
        for i in range(1,l+1):
            if l%i == 0:
                sum1 += (nums[i-1]*nums[i-1])
        return sum1        