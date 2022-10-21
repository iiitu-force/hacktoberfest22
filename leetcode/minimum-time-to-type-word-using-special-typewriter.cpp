class Solution {
public:
    int minTimeToType(string word) {
        int ans =0;
        char initial = 'a';
        for(int i=0;i<word.size();i++){
            char temp =  word[i];
            
            int store=abs(temp-initial);
            if(store > 13){
                store = 26-store;
            }
            ans+=store;
            initial = temp;
            
        }
        return ans+word.size();
    }
};

//
Idea:
We initialize res with word.size() because typing each letter takes 1 second. point starts at 'a'.
For each word, we check the minimum between going clockwise or counterclockwise.

class Solution {
public:
    int minTimeToType(string word) {
        int res = word.size(), point = 'a';
        for (auto ch : word) {
            res += min(abs(ch - point), 26 - abs(point - ch));
            point = ch;
        }
        return res;
    }
};