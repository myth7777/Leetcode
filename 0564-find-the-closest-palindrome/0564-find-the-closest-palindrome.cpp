class Solution {
public:

    long func(long firstHalf, bool isEven)
    {
        long resNum = firstHalf;

        if(isEven==false) //odd length n
        {
            firstHalf = firstHalf/10;
        }
        while(firstHalf>0)
        {
            int digit = firstHalf%10;
            resNum = resNum*10 + digit;
            firstHalf = firstHalf/10;
        }
        return resNum;
    }
    string nearestPalindromic(string n) {
        int L = n.length();
        int mid = L/2;

        int fhl = (L%2==0) ? mid : mid+1;

        long firstHalf = stol(n.substr(0,fhl));

        vector<long>possibleAns;

        possibleAns.push_back(func(firstHalf, L%2==0));
        possibleAns.push_back(func(firstHalf+1, L%2==0));
        possibleAns.push_back(func(firstHalf-1, L%2==0));
        possibleAns.push_back((long)pow(10,L)+1);
        possibleAns.push_back((long)pow(10,L-1)-1);

        long diff = LONG_MAX;
        long result = LONG_MAX;
        long originalNum = stol(n);

        for(long num:possibleAns)
        {
            if(num == originalNum)
                continue;
            if(abs(num - originalNum)<diff)
            {
                diff = abs(num - originalNum);
                result = num;
            }
            else if(abs(num - originalNum)==diff)
            {
                result = min(num, result);
            }
        }
        return to_string(result);
    }
};