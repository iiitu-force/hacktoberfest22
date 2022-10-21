class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int need = 1 << k, size = s.size();
        vector<bool> got(need);

        int allone = need - 1, hashval = 0;

        for(int i = 0; i < size; i++){
            hashval = (hashval << 1) & allone | (s[i] - '0');

            if(i >= k - 1 && !got[hashval]){
                got[hashval] = true;
                need--;
                if(!need) return 1;
            } 
        }

        return 0;
    }
};Check If a String Contains All Binary Codes of Size K
