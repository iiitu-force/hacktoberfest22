class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string, int> m;
        vector<pair<int, string>> pq;

        for(auto &i : words) m[i]++;
        for(auto &i : m) pq.push_back({-i.second, i.first});

        sort(pq.begin(), pq.end());

        int ind = 0;

        while(ind < k){            
            ans.push_back(pq[ind].second);
            ind++;
        }

        return ans;
    }
};

// Leetcode Problem - https://leetcode.com/problems/top-k-frequent-words/description/
