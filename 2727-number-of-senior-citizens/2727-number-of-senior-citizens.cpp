class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        // 10+1+2+2 = ph.no.(0-9) + gender(10) + age(11-12) + seat(13-14)

        int count = 0;

        for(int i=0; i<n; i++)
        {
            string subStr = details[i];
            string ageStr;
            ageStr.push_back(subStr[11]);
            ageStr.push_back(subStr[12]);

            int age = stoi(ageStr);
            if(age>60)
                count++;
            ageStr.clear();
        }
        return count;
    }
};