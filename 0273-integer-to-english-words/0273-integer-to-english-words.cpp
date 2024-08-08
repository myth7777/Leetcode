class Solution {
public:

    vector<string>belowTen = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<string>belowTwenty = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string>belowHundred = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string solve(int num){
        if(num<10)
            return belowTen[num];

        if(num<20)
            return belowTwenty[num%10];

        if(num<100) //89 - Eighty Nine
        {
            return belowHundred[num/10] + ((num%10 != 0) ? " "+ belowTen[num%10] : "");
        }

        if(num<1000) //879 - Eight Hundered Seventy Nine
        {
            return solve(num/100) + " Hundred" + ((num%100 != 0) ? " " + solve(num%100) : "");
        }
        if(num<1000000) //67851 or 1005
        {
            return solve(num/1000) + " Thousand" + ((num%1000 != 0) ? " " + solve(num%1000) : "");
        }
        if(num<1000000000) //67851 or 1005
        {
            return solve(num/1000000) + " Million" + ((num%1000000 != 0) ? " " + solve(num%1000000) : "");
        }
        return solve(num/1000000000) + " Billion" + ((num%1000000000 != 0) ? " " + solve(num%1000000000) : "");
    }

    string numberToWords(int num) {
        if(num==0)
            return "Zero";

        return solve(num);
    }
};