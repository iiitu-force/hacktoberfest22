#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> mp;
        set<string> s;
    while (n--)
    {
       
        string a;
        cin >> a;
        mp[a]++;
        if(mp[a] == 1){
            // s.insert(a);
            cout << "ok"<< endl;
        }
        else{
            cout << a <<mp[a]-1<< endl;
        }
    }
    
}