/*
Given a matrix of size n*m. Every cell of matrix contains either 'A' or 'B'. Exchange is defined as swaping the characters between two cells. Your task is to find the minimum number of exchange needed to rearrange the given matrix such that no adjacent cell contains the same characters.
Two cells are adjacent if they share one of their common sides (left,right,front or back if exists). 

Note: There will not be any case that answer does not exist.
 

Example 1:

Input: matrix = {{A,A,B,A},{B,A,B,A},{B,B,A,B}}
Output: 2
Explanation: Minimum number of students whose 
sets got changed are 4 (indexes: ((0,1),(0,2),
(0,3),(2,0))). The final alloted sets are:
A B A B
B A B A
A B A B
Here 2 exchange are done so answer is 2.


Example 2:

Input: matrix = {{A,B},{B,A}}
Output: 0
Explanation: No two adjacent cell contains same
character.
 

Your Task:
You don' t need to read or print anything. Your task is to complete the function MinimumExchange() which takes matrix as input parameter and returns minimum number of  exchange needed.
 

Expected Time Complexity: O(n*m)
Expected Space Compelxity: O(1)
 

Constraints:
1 <= n, m <= 100
*/


// Solution
class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
        bool flag = true;
        
        int count1 = 0;
        int count2 = 0;
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        for(int i = 0; i < r; i++){
            bool currFlag = flag;
            for(int j = 0; j < c; j++){
                //For pattern -> ABABAB....
                if(currFlag and matrix[i][j] == 'B'){
                    count1++;
                }        
                else if(!currFlag and matrix[i][j] == 'A'){
                    count1++;
                }
                
                //For pattern -> BABABA....
                if(currFlag and matrix[i][j] == 'A'){
                    count2++;
                }        
                else if(!currFlag and matrix[i][j] == 'B'){
                    count2++;
                }
                
                currFlag = !currFlag;
            }
            flag = !flag;
        }
        
        int ans = min(count1, count2);
        if(ans % 2 == 0)
            return ans / 2;
            
        //Dont know why everyone is using this 
        //If anyone know plz reply....:)
        return min(ans, (r * c - ans) / 2);
    }

};

