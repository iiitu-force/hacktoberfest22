#include<bits/stdc++.h>
using namespace std;
int cnt =0,cnt2=0;
int position(string s,int index,int pos){
if(index == s.size()){
    return pos;
}
if(s[index] == '+'){
    return position(s,index+1,pos+1);
}
else{
     return position(s,index+1,pos-1);
}

}

int position1(string s,int index,int pos,int originalpos){
if(index == s.size() ){
   if(pos == originalpos){
    cnt++;
    return 1 ;

   }
   else{
    cnt2++;
    return 0 ;
   }
}
if(s[index] == '+'){
    return position1(s,index+1,pos+1,originalpos);
}
else if(s[index] == '-'){
     return position1(s,index+1,pos-1,originalpos);
}
else{
// i need help in this else
   int x =  position1(s,index+1,pos+1,originalpos);
   int y =  position1(s,index+1,pos-1,originalpos);
   if(x == 1){
    cnt++;
    return 1;
   }
   else{
    cnt2++;
    return 1;
   }
}
}




int main(){
    string s1,s2;
    cin >> s1>> s2;
    cout << fixed << setprecision(10);
   int k= position(s1,0,0);
   int y= position1(s2,0,0,k);
   float m =cnt;
   float n=cnt2;
   double cv =  m/(n+m);
   cout << cv;
}
// correct soln
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

double ans = 0 , total = 0 ;

void fun(string& build , string& temp , int n , int orgEnd , int ind = 0){
    if(ind >= n){
        int count = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(build[i] == '+') count++ ;
            else count-- ;
        }

        total++ ;
        if(count == orgEnd) ans++ ;
        return ;
    }

    if(temp[ind] != '?'){
        build.push_back(temp[ind]) ;
        fun(build,temp,n,orgEnd,ind + 1) ;
        build.pop_back() ;
    }
    else{
        build.push_back('+') ;
        fun(build,temp,n,orgEnd,ind + 1) ;
        build.pop_back() ;

        build.push_back('-') ;
        fun(build,temp,n,orgEnd,ind + 1) ;
        build.pop_back() ;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string org ;
    string temp ;

    cin >> org >> temp ;

    int orgEnd = 0 , n = org.size() ;
    for(int i = 0 ; i < n ; i++){
        if(org[i] == '+') orgEnd++ ;
        else orgEnd-- ;
    }

    string build ;
    fun(build,temp,n,orgEnd) ;

    cout << fixed << setprecision(12) ;
    cout << ans / total << endl ;

}