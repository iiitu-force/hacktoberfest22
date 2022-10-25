class Solution {
public:
    string greatestLetter(string s) {
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                arr1[s[i]-'a']++;
            }
            else{
                arr2[s[i]-'A']++;
            }
        }
        int max1;
        int flag =0;
        for(int i=0;i<26;i++){
            if(arr1[i] != 0 && arr2[i]!=0){
                max1 = i;
                flag =1;
            }
        }
        string s1= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
       string s2  ;
        if(flag == 1){
            s2+=s1[max1];}
        
            else{
                s2+="";
            }
        
        return s2;
    }
};


// other solution
class Solution {
public:
    string greatestLetter(string s) 
    {
        // declare a Hahmap for storing the characters and their occurance
        unordered_map<char, int> mp;
        
        // counting occuracne
        for(auto it: s)
        {
            mp[it]++;
        }
        
        // sort the string so repeated char will be come with together
        sort(s.begin(), s.end());
        
        // declare a ans string that will store our ans
        string ans = "";
        for(int i=0; i<s.size(); i++)
        {
            // char curr chatr into lowercase and uppercase
            char l = tolower(s[i]);
            char u = toupper(s[i]);
            
            // if both lower and uppercase are present then store it into ans
            // it will take greatest english letter that have occured more than 1 because it will run till n
            if(mp[l] && mp[u])
            {
                ans = u;        // storeing uppercase as given in the question that we need to return uppercase 
            }     
        }
        
        return ans;
    }
};
//
 string greatestLetter(string s) 
    {
        vector<int> low(26), upp(26); //storing occurences of lower and upper case letters
        string res = "";
    
        for(auto it : s) //iterate over each char and mark it in respective vector
        {
            if(it-'A'>=0 && it-'A'<26)
                upp[it-'A']++;
            else
                low[it-'a']++;
        }
        
        for(int i=25; i>=0; i--) //start from greater char 
        {
            if(low[i] && upp[i]) //if char found in upp and low that will be the result
            {
                res += 'A'+i; 
                break;
            }
                
        }
        return res;  
    }
};
