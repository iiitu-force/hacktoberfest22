#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int days;
    cin >> days;
    sort(v.begin(),v.end());
    for (int i = 0; i < days; i++)
    {
        int x;
        cin >> x;
       auto lower = upper_bound(v.begin(), v.end(), x);
    //   int z  = *min_element(v.begin(),v.end()); this was givving tle
       if(x < v[0]){
        cout <<0<< endl;
       }
       else{
        cout << lower - v.begin() << endl;
       }
    }
    
    
}