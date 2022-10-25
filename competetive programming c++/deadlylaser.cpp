#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n,m,sx,sy,d;
        cin >> n>> m>>sx>>sy>>d;
      // we will check ki woh ja skta hai ya nhi two ways top and right or left and bottom
      // 1 case
      if(sx-d > 1 && sy+d <  m){
        cout << n+m-2<< endl;
      }
      else if(sx+d < n && sy-d > 1){
        cout << n+m-2<< endl;
      }
      else{
        cout << -1 << endl;
      }
    

    }
    
}
//

