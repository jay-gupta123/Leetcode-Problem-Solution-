class Solution:
    def canPlaceFlowers(self, nums: List[int], n: int) -> bool:
        for i in range(0,len(nums)):
            if nums[i] == 0:
                l = 0 if i == 0  else  nums[i-1]
                r = 0 if i == len(nums)-1 else  nums[i+1]
                if(l ==0  and r ==0):
                    nums[i] = 1
                    n-=1
        if n<=0:
            return True
        return False
        