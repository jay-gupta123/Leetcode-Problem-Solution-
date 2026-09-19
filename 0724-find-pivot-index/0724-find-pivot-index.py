class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        s=0
        total =sum(nums)
        for i in range(len(nums)):
            total = total - nums[i]
            if s == total:
                return i
            s += nums[i]
        return -1


        