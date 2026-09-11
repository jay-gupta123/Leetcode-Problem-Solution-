#bruete Force
class Solution1:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        list1 = []
        for i in range(len(nums)):
            pr=1
            for j in range(len(nums)):
                if j != i:
                    pr *= nums[j]
            
            list1.append(pr)
        
        return list1

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        pr = 1
        count =0
        for i in range(n):
            if nums[i] == 0:
                count +=1
            else:
                pr *=nums[i]
        
        list1 = [0]*n

        if count > 1:
            return list1
        elif count ==1:
            for  i  in range(n):
                if nums[i] == 0:
                    list1[i] = pr
        
        else:
            for i in range(n):
                list1[i] = pr // nums[i]
        
        return list1

        
            
