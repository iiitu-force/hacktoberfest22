class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int l=0,r=0;
        for(int i =0;i< s.size();i++){
            if(s[i] == 'R'){
                r++;
            }
            if(s[i]== 'L'){
                l++;
            }
            if(l == r){
                cnt++;
                l =0;
                r=0;
            }
        }
        return cnt;
    }
};

//
Greedily split the string, and with the counting
L +1
R -1

when the counter is reset to 0, we get one balanced string.

C++

int balancedStringSplit(string s) {
    int res = 0, cnt = 0;
    for (const auto& c : s) {
        cnt += c == 'L' ? 1 : -1;
        if (cnt == 0) ++res;
    }
    return res;        
}