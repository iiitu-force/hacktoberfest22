class Solution {
public:
    int division(int x)
    {
        int num = x, dig = floor(log10(x)) + 1;
        while(x)
        {
            int r = x % 10;
            if(r == 0 || num % r != 0)
            {
                return false;
            }
            x /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for(int i = left; i <= right; i++)
        {
            if(division(i))
            {
                ans.push_back(i);
            }
        }    
        return ans;
    }
};
