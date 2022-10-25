#include<bits/stdc++.h>
using namespace std;

long long printre(long long m,vector<long long>v,long long x,int i){
    if(i == v.size()){
      if(x == m){
        return 1;
      }
      else{
        return 0;
      }
      
    }
    return max(printre(m,v,x+v[i],i+1),printre(m,v,x-v[i],i+1));
}




int main(){
long long n,m;
    cin >> n >> m;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        long long y;
        cin >> y;
        v.push_back(y);
    }

    long long y = printre(m,v,v[0],1);
    if(y == 1LL){
        cout << "YES"<< endl;
    }
    else{
        cout << "NO"<< endl;
    }
    
}