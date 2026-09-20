class Solution:
    def reverseDegree(self, s: str) -> int:
        sum  =0 
        for i in range(len(s)):
            rev = 26 - (ord(s[i]) - ord('a'))
            num = i+1
            sum += rev * num
        return sum



        