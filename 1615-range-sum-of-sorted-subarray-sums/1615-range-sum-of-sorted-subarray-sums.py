class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        m=1000000007
        allSubSum = []

        for i in range(0,n):
            sum = 0
            for j in range(i,n):
                sum = (sum + nums[j])
                allSubSum.append(sum)

        allSubSum.sort()

        newSum = 0
        for i in range(left-1, right):
            newSum = (newSum + allSubSum[i])

        return (newSum)%m