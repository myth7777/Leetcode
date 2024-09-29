class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int vowels=0;
        
        int l=0, r=k;

        for(int i=0; i<k; i++)
            if(isVowel(s[i]))
                vowels++;
        
        int maxVowel=vowels;

        while(r<n)
        {
            if(isVowel(s[r]))
                vowels++;
            if(isVowel(s[r-k]))
                vowels--;

            maxVowel = max(maxVowel, vowels);

            r++;
            l++;
        }
        return maxVowel;
    }
};