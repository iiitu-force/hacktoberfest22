class Solution 
{
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int sum = 0, n = arr.size();
        for(int i = 0; i < n; i++)
        {
            sum += ((i + 1) * (n - i) + 1) / 2 * arr[i];
        }
        return sum;
    }
};
