class Solution {
public:
    int getLucky(string s, int k) {
        int n= s.length();
        string snum = "";

        for(char c:s)
        {
            snum +=  to_string(c - 'a' + 1);
        }
        

        while(k--)
        {
            int sum=0;
            for(char digit:snum)
            {
                sum += (digit-'0');
            }
            snum = to_string(sum);    
        }
        return stoi(snum);
    }
};