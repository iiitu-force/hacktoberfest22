#include<bits/stdc++.h>
#include<iostream>
#include<vector>
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        
        for (int i = 0; i < encoded.size(); i++)
        {
            int res;
            if (i == 0)
            {
                res = first^encoded[i];
                ans.push_back(res);
            }
            else
            {
               int temp;
               temp  = res^encoded[i];
               ans.push_back(temp);
               res = temp;
            }
            
            

        }
        return ans;

    }
};

vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        for(int i = 0; i < encoded.size(); i++)
            res.push_back(res[i] ^ encoded[i]);
        return res;
    }
// The inverse of XOR is XOR!

// If you have:

// c = a^b;
// You can get a or b back if you have the other value available:

// a = c^b; // or b^c (order is not important)
// b = c^a; // or a^c
// Hey Can you please explain what is the difference between
// for(int &n :encoded) and for(int n :encoded) its showing error in the 2nd one ....Can you explain Why?
// for (int &n : encoded => n is reference of each element in encoded.
// for (int n : encoded => n is copy of each element
// The second one will not give you an error, but will result wrong answers - since it operates on the copied n, and makes no change to the original array.
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans{first};
        for(int x: encoded)
            ans.push_back(first^=x);
        return ans;
    }
};