class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans =0;
        if(bank.size() == 1){
            return ans;
        }
        
             int first = count(bank[0].begin(),bank[0].end(),'1');
        int second = count(bank[1].begin(),bank[1].end(),'1');
        
       
        
        
        for(int i=1;i<bank.size();){
            // int temp1,temp2;
            if((first!=0 && second !=0)||(first == 0 && second == 0)){
                ans+=first*second;
                first = second;
                if(i != bank.size()-1){
                    i++;
                     second = count(bank[i].begin(),bank[i].end(),'1');
                    
                }
                else{
                    return ans;
                }
                
                
               
            }
            else if(first == 0){
                first = second;
                
                 if(i == bank.size()-1){
                    return ans;
                }
                i++;
                second = count(bank[i].begin(),bank[i].end(),'1');
               
            }
            else if(second ==0){
              
                if(i == bank.size()-1){
                    return ans;
                }
                  i++;
                second = count(bank[i].begin(),bank[i].end(),'1');
                 
            }
            
        }
        return ans;
    }
};
//
To find the total number of laser beams we have to do 2 things:

Find the number of laser beams between 'adjacent rows'. A row here is considered only if it has atleast 1 security device. Otherwise the row is simply ignored.
Thus if:
Row 1: 3 security devices
Row 2: 0 security devices
Row 3: 2 security devices
We can ignore row 2 and say that row 1 is adjacent to row 3. To find the number of laser beams between 'adjacent rows' we can multiply the number of security devices in the first row of the pair to the number of security devices in the second row of the pair.
Doing step 1 only solves a part of the problem. We now need to find the sum of all the laser beams from each pair of 'adjacent rows'.
Algorithm:
For each string in bank:

count = number of ones in string
Multiply count by the non-zero count of previous string and add it to ans
int numberOfBeams(vector<string>& bank) {
    int ans = 0, prev = 0, count = 0;
    for(string s: bank) {
        count = 0;
        for (int i = 0; i < s.size(); i++) 
            if (s[i] == '1') count++;
        if (count) {
            ans += prev * count;
            prev = count;
        }
    }
    return ans;
}

Time Complexity: O(mn), m = length of bank, n = length of string