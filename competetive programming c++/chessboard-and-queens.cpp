#include<bits/stdc++.h>
using namespace std;
char g[8][8] ;// global array
int c =0;
bool is_safe(int i ,int j){
    if(g[i][j] == '*'){
        return false;
        // not put qeen where star hai reserved position
    }
    //check ki kahi same column mai toh nhi aa rha hai phla placed queen se
    for (int k = i; k >= 0; k--)
    {
        /* code */
        if(g[k][j]=='q'){
            return false;

        }
    }
    //check two diagonals one going top left and one top right from bottom
    for (int k = i, l=j; k >=0&&l>=0; k--,l--)
    {
        /* code */
        if(g[k][l] =='q'){
            return  false;
        }
    }
    for (int k = i, l=j; k >=0&&l<8; k--,l++)
    {
        /* code */
        if(g[k][l] =='q'){
            return  false;
        }
    }
    
    // itna sabb  ki baad agar still no problwem to return true
    return true;
}

void solve(int i=0){
if(i==8){
    // means all queens placed and increase the count
    c++;
    return;
}
// i want to check for each i and all j from 0  to 8 ki problem to nhi hai agar safe hai toh place the queen and solve for i+1 and also then remove ehta u did
for (int j= 0; j < 8; j++)
{
    /* code */
    if(is_safe(i,j)){
        g[i][j] = 'q';
        solve(i+1);
        g[i][j]='.';
    }
}


}

int main(){
for (int i = 0; i < 8; i++)
{
    /* code */
    for (int j = 0; j < 8; j++)
    {
        /* code */
        cin >> g[i][j];
    }
    
}
solve();
cout << c << endl;

}