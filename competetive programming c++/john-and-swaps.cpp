#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// diffrent subssequence asked means we will use set
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<vector<int>> s;
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = i+1; j < n; j++)
            {
                /* code */
                swap(v[i],v[j]);
                s.insert(v);
                swap(v[i],v[j]);
            }
            
        }
        cout << s.size()<< endl;
        

        
    }
    
}