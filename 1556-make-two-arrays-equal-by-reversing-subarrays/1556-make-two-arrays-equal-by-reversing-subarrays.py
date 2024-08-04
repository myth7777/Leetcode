class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        # n = len(target)
        # arr.sort()
        # target.sort()

        # for i in range(n):
        #     if arr[i] != target[i]:
        #         return False
        
        # return True

        # using hashmap
    
        count_target = {}

        for num in target:
            if num in count_target:
                count_target[num] += 1
            else:
                count_target[num] = 1

        for num in arr:
            if num not in count_target:
                return False

            count_target[num] -= 1
            if count_target[num] == 0:
                del count_target[num]

        return len(count_target) == 0


        