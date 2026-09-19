class Solution:
    def largestAltitude(self, gain: list[int]) -> int:
        alt =0 
        maxi = 0
        for i in range(len(gain)):
            alt = alt + gain[i]
            maxi = max(maxi,alt)
        return maxi



        



        