#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,string> &a,
              const pair<int,string> &b)
{ 
    if(abs(a.first-b.first) > 10){
    return a.first < b.first;
}
else{
    return a.second > b.second;
}
}
int main(){
    int n;
    cin >> n;

    map<string ,vector<int>>mp;
    string s;
   
    
    vector<pair<int,string>> v2;
    for(int i=1;i<=n;i++){
        vector<int> temp(5);
        
        cin >> s >> temp[1] >> temp[2] >> temp[3]>> temp[4];
       
        v2.push_back({accumulate(temp.begin(),temp.end(),0),s});
        temp[0]=(accumulate(temp.begin(),temp.end(),0));
         mp[s]= temp;
    }
   
    sort(v2.rbegin(),v2.rend(),sortbysec);
    // vector<vector<int>> v5;
    for(auto i:v2){
        cout <<  i.second <<" ";
        vector<int>v6 = mp[i.second];
        for (int j = 0; j < v6.size(); j++)
        {
            /* code */
            cout << v6[j] << " ";
        }
        cout << endl;
        
        // v5.push_back(mp[i.second]);
    }
    //cout << v5.size()<< endl;
    
    


    // for (int i = 0; i < mp.size(); i++)
    // {
    //     /* code */
    //     vector<int> v3 = mp[(v2[i]).second];
    //     cout << v2[i].second << " ";
    //     for(int j=0;j<4;j++){
    //         cout << v3[j]<< " ";
    //     }
    //     cout << endl;
    // }
    
    

 
 

}