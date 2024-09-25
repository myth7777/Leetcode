class Solution {
public:
    void convertTolower(string &s){
        for(int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }

    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
            return false;
        
        convertTolower(s);
        convertTolower(t);
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s==t;

        map<char, int>char_count;

        for(char ch : s)
            char_count[ch]++;
        
        for (char ch : t)
        {
            char_count[ch]--;
            if(char_count[ch]<0)
                return false;
        }
        return true;
    }
};