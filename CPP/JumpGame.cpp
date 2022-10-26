#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int>v;
        bool vis[50000]={false};
        int val[50000]={0};
        bool jump(int ind)
        {   if(ind==v.size()-1)return true;
            for(int i=1;i<=v[ind]&&ind+i<v.size();i++){
                
                bool flag=false;
                if(vis[ind+i]==false){
                    if(ind+i==v.size()-1&&v[ind]>=0)return true;
                    flag=jump(ind+i);
                    vis[ind+i]=true;
                    if(flag)val[ind+i]=1;
                    else val[ind+i]=0;
                }else flag=val[ind+i];
                if(flag==true)return true;
            }
        return false;
        }
        bool canJump(vector<int> &nums) {
            if(nums.size()==0)return false;
            v=nums;
            bool flag=jump(0);
            v.clear();
            return flag;
        }
    };
    void trimLeftTrailingSpaces(string &input) {
        input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
            return !isspace(ch);
        }));
    }
    void trimRightTrailingSpaces(string &input) {
        input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
            return !isspace(ch);
        }).base(), input.end());
    }
    vector<int> stringToIntegerVector(string input) {
        vector<int> output;
        trimLeftTrailingSpaces(input);
        trimRightTrailingSpaces(input);
        input = input.substr(1, input.length() - 2);
        stringstream ss;
        ss.str(input);
        string item;
        char delim = ',';
        while (getline(ss, item, delim)) {
            output.push_back(stoi(item));
        }
        return output;
    }
    string boolToString(bool input) {
        return input ? "True" : "False";
    }
    int main() {
        string line;
        while (getline(cin, line)) {
            vector<int> nums = stringToIntegerVector(line);
            
            bool ret = Solution().canJump(nums);

            string out = boolToString(ret);
            cout << out << endl;
        }
        return 0;
    }