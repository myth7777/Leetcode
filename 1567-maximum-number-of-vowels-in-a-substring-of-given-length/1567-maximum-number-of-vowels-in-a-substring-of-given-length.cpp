class Solution {
public:
    bool isVovel(char ch)
    {
        if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int vovels=0;
        
        int l=0, r=k;

        for(int i=0; i<k; i++)
            if(isVovel(s[i]))
                vovels++;
        
        int maxVovel=vovels;

        while(r<n)
        {
            if(isVovel(s[r]))
                vovels++;
            if(isVovel(s[r-k]))
                vovels--;

            maxVovel = max(maxVovel, vovels);

            r++;
            l++;
        }
        return maxVovel;
    }
};