class Solution {
public:
    bool isVovel(char ch){
        ch = tolower(ch);
        return ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u';
    }
    string reverseVowels(string s) {
        int n = s.length();
        int i=0, j=n-1;

        while(i<j)
        {
            while(i<j && !isVovel(s[i]))
            {
                i++;
            }
            while(i<j && !isVovel(s[j]))
            {
                j--;
            }
            if(i<j)
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};