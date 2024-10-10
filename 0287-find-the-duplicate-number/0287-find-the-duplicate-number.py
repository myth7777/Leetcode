class Solution:
    def findDuplicate(self, arr: List[int]) -> int:
        n = len(arr)
        temp = [0]*n
        
        for i in range(n):
            temp[arr[i]] += 1

        for i in range(0,n):
            if temp[i]>1:
                return i 

        return 0