class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        set1   = set(nums1)
        list1=[]
        for  num in set1:
            if num not in nums2:
                list1.append(num)
        
        set2 = set(nums2)
        list2 = []
        for num in set2:
            if num not in nums1:
                list2.append(num)
        ans = []
        ans.append(list1)
        ans.append(list2)
        return ans
        