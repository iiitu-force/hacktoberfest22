#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    string s;
    cin >> x;
    cin >> s;
    int arr[26] ={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-'A']++;
    }
    // single check;
    int flag =1;
    for(int i=0;i<s.size();i++){
        if(arr[i] == 1){
            cout << 1 ;
            flag =0;
            break;
        }
    }
    string s1,s2;
    for (int i = 0; i < x; i++)
    {
        /* code */
        s1 = s[i];
        for (int j = i+1; j < x; j++)
        {
            /* code */
           
            s2 =  s[j];


        }
        
    }
    
}