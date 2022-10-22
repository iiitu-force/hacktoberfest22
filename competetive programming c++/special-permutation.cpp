#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n,a,b;
        cin >> n >> a >> b;
        vector<int> v(n+1,1);
        v[a]= -1;
        v[b]=-1;
        vector<int> v1;
        // v1[0]= a;
        // v1[n-1]= b;
        v1.push_back(a);

        for (int i = n; i >=1; i--)
        {
            /* code */
            if(v1.size()< n/2){
                if(i>a && i!=b){
                    v1.push_back(i);
                    v[i]=-1;
                }
            }
           
            
        }
         for (int i = n; i >=1; i--)
        {
            /* code */
            if(v[i] != -1 && i<b && i!= b){
                v1.push_back(i);
            }
           
            
        }
        v1.push_back(b);
        if(v1.size() != n){
            cout << -1 << endl;
        }
        
        else{
            int minleft = *min_element(v1.begin(),v1.begin()+n/2);
            int maxleft = *max_element(v1.begin()+n/2,v1.end());
            if(minleft != a || maxleft != b){
                cout << -1 << endl;
            }
            else{
                for (int i = 0; i < v1.size(); i++)
        {
            /* code */
            cout << v1[i] << " ";
        }
        cout << endl;
        }
            }

        
        
        
        

    }
    
}