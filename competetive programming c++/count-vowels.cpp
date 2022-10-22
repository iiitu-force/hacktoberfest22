#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    char x = toupper(c);
    if((x == 'A')||(x == 'E')||(x == 'I')||(x == 'O')||(x == 'U')){
        return true;
    }
    return false;
}


int cntvowels(string s, int i){
    if(i == 1){
      return isvowel(s[i-1]);
    }
    return cntvowels(s,i-1)+ isvowel(s[i-1]);
}









int main(){
    string s;
    // cin >> s;
    getline(cin,s);
    int k =cntvowels(s,s.size());
    cout << k;

    
}
