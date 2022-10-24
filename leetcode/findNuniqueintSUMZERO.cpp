class Solution {
public:
    vector<int> sumZero(int n) {
      vector<int> ans;
        if(n%2 == 0){
            for(int i =1;i<=(n/2);i++){
                ans.push_back(i);
                int l = -i;
                ans.push_back(l);
            }
        }
        else{
            ans.push_back(0);
             for(int i =1;i<=(n/2);i++){
                ans.push_back(i);
                int l = -i;
                ans.push_back(l);
            }
        }
        return ans;
    }
};