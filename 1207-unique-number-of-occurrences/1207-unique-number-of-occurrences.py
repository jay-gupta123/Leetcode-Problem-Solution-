class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        freq = {}
        for num in arr:
            freq[num] = freq.get(num,0)+1
        
        set1 = set()
        for key,val in freq.items():
            if val in set1:
                return False
            set1.add(val)
        return True





        