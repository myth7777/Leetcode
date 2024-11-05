class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        stack<int>pos;
        stack<int>neg;

        for(int i=n-1;i>=0; i--)
        {
            if(nums[i]>=0)
                pos.push(nums[i]);
            else
                neg.push(nums[i]);
        }
        for(int i=0; i<n; i++)
        {
            // if(i%2==0)
            // {
            //     nums[i] = pos.top();
            //     pos.pop();
            // }
            // else
            // {
            //     nums[i] = neg.top();
            //     neg.pop();
            // }

            nums[i]=pos.top();
            pos.pop();
            i++;

            nums[i]=neg.top();
            neg.pop();
        }
        return nums;
    }
};