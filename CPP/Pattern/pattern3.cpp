#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            int value = i;
            char ch ='A'+ j -i;
            
            cout<<ch;
            ch = ch+1;
            j= j+1;

        }
        cout<<endl;
        i=i+1;
        
    }
    return 0;
}