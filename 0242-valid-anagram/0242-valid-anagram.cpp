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
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;
        
    }
};