class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        p=0
        while (3**p <= n):
            p=p+1
        
        while(n>0):
            if(n>=3**p):
                n=n-3**p
            
            if(n>=3**p):
                return False

            p=p-1

        return True