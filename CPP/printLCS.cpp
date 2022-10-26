 #include <bits/stdc++.h>

 using namespace std;
 
 int solveTab(string text1, string text2, vector<vector<int>>&dp){
        
        int n = text1.size();
        int m = text2.size();

      
        
        for(int i=0; i<=n; i++){
            dp[i][0] = 0;   //when index2==0
        }
        
        for(int j=0; j<=m; j++){
            dp[0][j] = 0;  //when index1==0
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
    }

string printLCS(string text1, string text2, vector<vector<int>>&dp){


    int n = text1.size();
    int m = text2.size();

    int length = solveTab(text1, text2, dp);
    int ansIndex = length -1 ;

    string ans;

    int index1 = n;
    int index2 = m;

    while(index1>0 && index2>0){

        if( text1[index1-1] == text2[index2-1] ){
            ans.push_back(text1[index1-1]);
            // ans[ansIndex] = text1[index1-1];


            index1--;
            index2--;
            ansIndex--;
        }

        else if( dp[index1-1][index2] > dp[index1][index2-1]){
            index1--;
        }

        else 
            index2--;
    }

    reverse(ans.begin(), ans.end());

    // cout<<ans;
    return ans;


}

int main(int argc, char const *argv[])
{
    string text1 = "abcde";
    string text2 = "bdgek";

    int n = text1.size();
    int m = text2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

    cout<<printLCS(text1, text2, dp);
    return 0;
}
