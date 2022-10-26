class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i =0;i<(s.size())/2;i++){
            swap(s[i],s[s.size()-1-i]);
        }
       
    }
};
class Solution {
public:
    string reverseString(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i++], s[j--]); 
        }
        
        return s;
    }
};