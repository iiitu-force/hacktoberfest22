class Solution {
public:
    string reversePrefix(string word, char ch) {
         size_t found = word.find(ch);
         if (found != string::npos){
             string temp;
             for(int i=0;i<=found;i++){
                 temp+=word[i];
             }
             for(int i=0;i<=found;i++){
                 word[i]= temp[found-i];
             }
         }
        return word;
    }
};