#include<bits/stdc++.h>
using namespace std;
struct query{
    int enter,exit;
};
int main(){
    int n;
    cin >> n;
    query q[n];
    set<int> cc;
   for(int i=0;i<n;i++)
    {
        /* code */
        cin >> q[i].enter >> q[i].exit;
        cc.insert(q[i].enter);
        cc.insert(q[i].exit);


    }
    int ind=0;
    map<int,int> comp;
    for(auto i:cc){
        comp[i] =ind++;
    }
    vector<int> change(cc.size());

    for(auto i: q){
      change[comp[i.enter]]++;
        change[comp[i.exit]]--;
    }
     for (int i = 1; i < cc.size(); i++)
        change[i] += change[i-1];

    cout << *max_element(change.begin(), change.end()) << endl;

}