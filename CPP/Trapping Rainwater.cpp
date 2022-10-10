#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size(), ans = 0;
        int leftmax = height[0], rightmax = height[n - 1];
        int i = 1, j = n - 2;
        while (i <= j)
        {
            if (leftmax < rightmax)
            {
                if (leftmax < height[i])
                    leftmax = height[i++];
                else
                    ans += abs(leftmax - height[i]), i++;
            }
            else
            {
                if (rightmax < height[j])
                    rightmax = height[j--];
                else
                    ans += abs(rightmax - height[j]), j--;
            }
        }

        return ans;
    }
};