class Solution:
    def targetIndices(self, nums: list[int], k: int) -> list[int]:
        nums.sort()
        list1 = []
        for i in range(0,len(nums)):
            if nums[i] == k:
                list1.append(i)
        return list1