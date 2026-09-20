class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        list1 = [0]*26
        list2 = [0]*26
        if len(word1) != len(word2):
            return False
        
        for i in range(len(word1)):
            idx1 = ord(word1[i]) - ord('a')
            idx2 = ord(word2[i]) - ord('a')
            list1[idx1] +=1
            list2[idx2] +=1

        for i in range(len(list1)):
            if list1[i] != 0 and list2[i] != 0:
                continue
            if list1[i] == 0  and list2[i] == 0:
                continue
            return False
        
        list1.sort()
        list2.sort()
        return list1 == list2
        
        

        



        
        