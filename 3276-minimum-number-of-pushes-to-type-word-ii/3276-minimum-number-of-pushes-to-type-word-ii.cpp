class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq_mp(26,0);

        for(char &ch : word)
        {
            freq_mp[ch-'a']++; 
        }
        sort(begin(freq_mp), end(freq_mp), greater<int>()); //sorting in descending order

        int result = 0;

        for(int i=0; i<26; i++)
        {
            int freq = freq_mp[i];
            int press = i/8 + 1;

            result = result + press*freq;
        }
        return result;
    }
};