class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        string ans = "";
        int i=0, j=0;
        while(n1 != 0 && n2 !=0)
        {
            ans = ans + word1[i];
            i++;
            n1--;

            ans = ans + word2[j];
            j++;
            n2--;
        }
        while(n1!=0)
        {
            ans = ans + word1[i];
            i++;
            n1--;
        }
        while(n2!=0)
        {
            ans = ans + word2[j];
            j++;
            n2--;
        }
        return ans;
    }
};