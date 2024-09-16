class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        nums.sort()
        if nums[0]!=0:
            return 0
        if nums[-1] != n:
            return n    
        for i in range(1,n):
            if nums[i] != nums[i-1]+1:
                return nums[i-1]+1