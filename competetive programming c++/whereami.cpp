#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("whereami.in","r",stdin); 
	freopen("whereami.out","w",stdout); 
    int n;
    string s;
    cin >> n ;
    cin >> s;
    unordered_set<string> ss;
    int mink =0;
    int flag =1;
    for (int k = 1; k <= n; k++)
    {
        /* code */
        for (int i = 0; i <= n-k; i++)
        {
            /* code */
            string s1 = s.substr(i,k);
            if(ss.count(s1) == 0){
                ss.insert(s1);
            }else{
                ss.empty();
                break;
            }
            if(i == n-k){
                mink =k;
                flag =0;
            }


        }
        if(flag == 0){
            break;
        }
        
    }
    cout << mink;
    
}