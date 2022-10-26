class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int cnt = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > 0)
            {
                if (find(arr.begin(), arr.end(), (arr[i]) * 2) != arr.end())
                {
                    cnt++;

                    return true;
                }
            }
            else if (arr[i] < 0)
            {
                int temp = arr[i]*2;
                if (find(arr.begin(), arr.end(), temp) != arr.end())
                {
                    cnt++;

                    return true;
                }
            }
            else
            {
                if (count(arr.begin(), arr.end(), 0) > 1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
//
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set;
        for(int i=0;i<arr.size();i++){
            if(set.count(2*arr[i])>0 || ((arr[i]%2==0) && set.count(arr[i]/2)>0))
                return true;
            set.insert(arr[i]);
        }
        return false;
    }
};
//
// Brute Force Two Pointer Soln
// Time O(n.n)
// Space O(1)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        int pointer_one = -1;
        int pointer_two = -1;
        
        for (pointer_one = 0; pointer_one < arr.size(); pointer_one++) {
            int n = arr[pointer_one];
            for (pointer_two = pointer_one + 1; pointer_two < arr.size(); pointer_two++) {
                int m = arr[pointer_two];
                if ( n == (2 * m) || m == (2 * n)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
// Binary Search Soln
// Time O(N.logN)
// Space O(1)

class Solution {
public:
    bool binarySearch (vector<int> &arr, int l, int r, int target)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == target)
                return true;
            else if (arr[m] > target)
                r = m - 1;
            else
                l = m + 1;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        for (int pointer_one = 0; pointer_one < arr.size(); pointer_one++) {
            if ((arr[pointer_one] % 2 == 0) && arr[pointer_one] < 0) {
                if (binarySearch(arr, pointer_one + 1, arr.size() - 1, arr[pointer_one] / 2))
                    return true; 
            }
            else {
                if (binarySearch(arr, pointer_one + 1, arr.size() - 1, 2 * arr[pointer_one]))
                    return true;
            }
        }
        return false;
    }
};
// Hash Table Soln
// Time: O(N)
// Space: O(N)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> uset;
        for(int& i:arr){
            if(uset.count(2*i) || (!(i&1) && (uset.count(i/2))))
                return true;
            uset.insert(i);
        }
        return false;
    }
};