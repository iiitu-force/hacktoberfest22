#include<bits/stdc++.h>
using namespace std;

void printre(int x){
    if(x <= 0){
        return;

    }
    cout <<"I love Recursion"<< endl;
    x--;
    printre(x);

}



int main(){
    int t;
    cin >> t;
    printre(t);
}