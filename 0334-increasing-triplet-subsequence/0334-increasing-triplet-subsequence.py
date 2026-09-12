class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        num1 = float('inf')
        num2 = float('inf')
        for i in range(len(nums)):
            num3 = nums[i]
            if(num3 <= num1):
                num1 = num3
            elif(num3<=num2):
                num2 = num3
            else:
                return True
        return False