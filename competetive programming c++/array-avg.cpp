#include<bits/stdc++.h>
using namespace std;


double sum1(vector<double> v,int i){
 if(i == 1){
  return v[i-1];
 }
 return sum1(v,i-1) + (double)v[i-1];
}
int main(){
    int x;
    cin >> x;
    vector<double> v;
    for (int i = 0; i < x; i++)
    {
        /* code */
        double c;
        cin >> c;
        v.push_back(c);
    }
     cout << setprecision(7);
    double k=sum1(v,v.size());
    double y = k/v.size();
    
    cout  << y;
    
}