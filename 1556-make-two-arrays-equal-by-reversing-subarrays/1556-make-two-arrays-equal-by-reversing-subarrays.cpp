class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // if(target.size()==1 && target[0]==arr[0])
        //     return true;
        
        // sort(target.begin(), target.end());
        // sort(arr.begin(), arr.end());

        // for(int i=0; i<target.size(); i++)
        // {
        //     if(target[i]!=arr[i])
        //         return false;
        // }
        // return true;
        int n = target.size();
        map<int,int>mp;
        for(auto it:target)
            mp[it]++;

        for(int num:arr)
        {
            if(mp.find(num)==mp.end())
                return false;
            
            mp[num]--;
            if(mp[num]==0)
                mp.erase(num);
        }

        if(mp.size()==0)
            return true;
        
        return false;
    }
};