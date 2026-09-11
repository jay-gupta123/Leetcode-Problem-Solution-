class Solution:
    def reverseVowels(self, s: str) -> str:
        v = "aeiouAEIOU"
        tem = ""
        for i in range(0,len(s)):
            if s[i] in v:
                tem += s[i]
        
        rev  = tem[::-1]
        j=0
        ans = ""
        for i in range(len(s)):
            if s[i] in v:
                ans += rev[j]
                j +=1
            else:
                ans += s[i]
        return ans
        
                
        return s




            

        



        