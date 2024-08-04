class Solution:
    def countSeniors(self, details: List[str]) -> int:
        count  = 0
        # 15 = (0-9)+(10)+(11-12)+(13-14)

        for s in details:
            age = s[11]+s[12]
            age_num = int(age)
            if age_num > 60:
                count += 1

        return count