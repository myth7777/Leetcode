class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;
        
        string doubled = goal+goal;

        if(doubled.contains(s))
            return true;

        return false;
    }
};