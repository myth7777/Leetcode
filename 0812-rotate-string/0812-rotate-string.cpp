class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;
        
        string doubled = goal+goal;

        if(doubled.find(s) != string::npos)
            return true;

        return false;
    }
};