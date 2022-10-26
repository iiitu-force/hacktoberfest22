#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    int ans =0;
    int max1 =0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin >> x;
        if(s.find(x) == s.end() ){
            s.insert(x);
            int y = s.size();
           max1 = max(max1,y);
           
        }
        else{
            int y = s.size();
           max1 = max(max1,y);
            s.clear();
            s.insert(x);
           

        }
    }
    cout << max1;
    
    


}