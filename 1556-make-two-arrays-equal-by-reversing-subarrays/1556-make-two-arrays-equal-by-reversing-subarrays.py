class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        n = len(target)
        arr.sort()
        target.sort()

        for i in range(n):
            if arr[i] != target[i]:
                return False
        
        return True