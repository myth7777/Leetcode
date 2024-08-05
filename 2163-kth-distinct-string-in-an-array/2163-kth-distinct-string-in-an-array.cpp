class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        vector<string>str;

        for(auto it:arr)
            mp[it]++;
        
        for(auto it:arr)
        {
            if(mp[it] == 1)
                str.push_back(it);
        }
        if(str.size()<k)
            return "";
        
        return str[k-1];
    }
};