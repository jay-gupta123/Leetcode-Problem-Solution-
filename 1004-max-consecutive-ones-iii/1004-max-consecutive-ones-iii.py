#bruete force approach :- logic :- treat this question as longest subarray with max k zero's
class Solution1:
    def longestOnes(self, nums: list[int], k: int) -> int:
        maxi = float('-inf')
        for i in range(len(nums)):
            zero =0 
            for j in range(i,len(nums)):
                if nums[j] == 0:
                    zero +=1
                if zero <= k:
                    length = j-i+1
                    maxi = max(maxi,length)
                else:
                    break
        return maxi


class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        i=0
        j=0
        zero = 0
        maxi = float('-inf')
       
        while j < len(nums):
            if nums[j] == 0:
                zero+=1
            while zero > k:
                if nums[i] == 0:
                    zero -=1
                i+=1
            if zero <= k:
                length = j-i+1
                maxi = max(maxi,length)
            j+=1
        return maxi

            


        


        




        
        

        
        