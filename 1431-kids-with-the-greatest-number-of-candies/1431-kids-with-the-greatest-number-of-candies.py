class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        list1 = []
        maxi = max(candies)
        for i in range(0,len(candies)):
            if candies[i] + extraCandies >= maxi:
                list1.append(True)
            else:
                list1.append(False)
        return list1


        
        

        

        