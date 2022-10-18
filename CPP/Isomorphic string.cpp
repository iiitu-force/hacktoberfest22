class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.length();
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        for(int i=0;i<n1;i++)
        {
            smap[s[i]]=i+1;
            tmap[t[i]]=i+1;
        }
        for(int i=0;i<n1;i++)
        {
            if(smap[s[i]]!=tmap[t[i]])
            {return false;}
        }
        return true;
    }
};
