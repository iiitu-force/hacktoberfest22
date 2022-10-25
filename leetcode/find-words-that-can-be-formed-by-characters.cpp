class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr1[26] = {0};
        for(int i =0;i<chars.size();i++){
            arr1[chars[i]-'a']++;
            
        }
        int cnt=0;
        for(int i =0;i<words.size();i++){
             int arr2[26] = {0};
            int flag =0;
            for(int j=0;j<words[i].size();j++){
                 arr2[words[i][j]-'a']++;
            }
            for(int j=0;j<26;j++){
                if(arr2[j] > arr1[j] && arr2[j] != 0){
                    flag =1;
                }
                
            }
            if(flag == 0){
                cnt+=words[i].size();
            }
        }
        return cnt;
    }
};

//
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // Create a map to store the occurences of each character in "chars"
        // Each character is mapped to their frequency <char, int>
        vector<int> chFreq(26, 0);
        // if a character is found, increment its frequency, e.g chFreq['a']++
        for(auto ch : chars) chFreq[ch - 'a']++;
        
        // Declare an integer to store sum of all the strings that are valid
        int count = 0;
        
        // Loop through the vector=
        for(auto str : words){
            // Create a flag to switch to false if the string can not be formed from "chars"
            bool flag = true;
            // Create a map to store the frequency of characters in current string
            vector<int> copyFreq(26, 0);
            // Loop through string and if the frequency of any character in the string
            // is greater than the frequency of the same character 
            // in the "chars" string, make flag false and end loop (word is invalid)
            for(auto ch : str) {
                if(++copyFreq[ch - 'a'] > chFreq[ch - 'a']){
                    flag = false;
                    break;
                }
            }
            // Append string's length to "count" if the flag is still true(valid)
            if(flag) count += str.size();
        }
        
        // Return count
        return count;
    }
};