#include<bits/stdc++.h>
using namespace std;

long long sum1(int t ,long long sum =0){
  if(t<=0){
    return sum;
  }
  int x;
  cin >> x;
  t--;
  sum+=x;
 return sum1(t,sum);
}


int main(){
    int t;
    cin >> t;
    long long sum ;
   sum  = sum1(t,0);
   cout << sum << endl;
    

}