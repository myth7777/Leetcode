class Solution:
    def reverseWords(self, s: str) -> str:
        st = []
        subStr = ""
        ans = ""
        n = len(s)

        for ch in s:
            if(ch == ' '):
                if(subStr):
                    st.append(subStr)
                    subStr = ""

            else:
                subStr += ch
        
        if(subStr):
            st.append(subStr) 

        while(len(st) != 1):
            ans = (ans+st.pop()) + " "

        ans = ans + st.pop()

        return ans