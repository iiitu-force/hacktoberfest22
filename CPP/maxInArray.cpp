#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int a;
  cout<<"Enter the Size of array"<<"\n";
  cin>>a;
  vector<int>v(a);
  int maxi = INT_MIN;
  for(int i=0;i<a;i++)
  {
    cin>>v[i]; 
  }
  
  for(int i=0;i<a;i++)
  {
    if(v[i]>maxi)
    {
      maxi=v[i];
    }
  }
  cout<<maxi<<"\n";
  return 0;
  
}
